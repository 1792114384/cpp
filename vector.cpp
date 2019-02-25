#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

namespace LHZ
{
	template <class T>
	class vector
	{
	public:
		typedef T* Iterator;
		typedef const T* ConstIterator;
		vector()
			:_start(nullptr)
			,_end(nullptr)
			,_endOfCapacity(nullptr)
		{}
		vector(int n, const T& value)
			:_start(nullptr)
			, _end(nullptr)
			, _endOfCapacity(nullptr)
		{
			Reserve(n);
			while (n--)
			{
				PushBack(value);
			}
		}

		template <class InputIterator>
		vector(InputIterator first, InputIterator end)
		{
			Reserve(end - first);
			while (first != end)
			{
				PushBack(*first);
				++first;
			}
		}

		vector(const vector<T>& v)
			:_start(nullptr)
			, _end(nullptr)
			, _endOfCapacity(nullptr)
		{
			Reserve(v.Capacity());
			Iterator it = Begin();
			ConstIterator vit = v.CBegin();
			while (vit != v.CEnd())
			{
				*it++ = *vit++;
			}
			_end = _start + v.Size();
			_endOfCapacity = _start + v.Capacity();
		}

		~vector()
		{
			delete[] _start;
			_start = _end = _endOfCapacity = nullptr;
		}

		vector<T>& operator=(vector<T> v)
		{
			Swap(v);
			return *this;
		}

		void Swap(vector<T>& v)
		{
			swap(_start, v._start);
			swap(_end, v._end);
			swap(_endOfCapacity, v._endOfCapacity);
		}

		Iterator Begin() { return _start; }
		Iterator End() { return _end; }
		ConstIterator CBegin() const{ return _start; }
		ConstIterator CEnd() const { return _end; }
		Iterator RBegin() { return _end; }
		Iterator REnd() { return _start; }

		size_t Size() const { return _end - _start; }
		size_t Capacity() const { return _endOfCapacity - _start; }

		void Reserve(size_t n)
		{
			if (n > Capacity())
			{
				size_t size = Size();
				T* tmp = new T[n];
				for (size_t i = 0; i < size; ++i)
				{
					tmp[i] = _start[i];
				}
				_start = tmp;
				_end = _start + size;
				_endOfCapacity = _start + n;
			}
		}
		void Resize(size_t n, const T& value = T())
		{
			if (n < Size())
			{
				_end = _start + n;
				return;
			}
			if (n > Capacity())
			{
				Reserve(n);
			}
			Iterator it = _end;
			_end = _start + n + 1;
			while (it != _end)
			{
				*it = value;
				++it;
			}
		}

		void PushBack(const T& value)
		{
			Insert(End(), value);
		}
		void PopBack()
		{
			Erase(End() - 1);
		}

		Iterator Insert(Iterator pos, const T& value)
		{
			assert(pos <= _end);
			if (_end == _endOfCapacity)
			{
				size_t size = Size();
				size_t newCapacity = 0;
				newCapacity = Capacity() == 0 ? 1 : Capacity() * 2;
				Reserve(newCapacity);
				pos = _start + Size();
			}
			Iterator end = _end - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				end--;
			}
			*pos = value;
			_end++;
			return pos;
		}

		Iterator Erase(Iterator pos)
		{
			Iterator begin = pos + 1;
			while (begin != _end)
			{
				*(begin - 1) = *(begin);
				++begin;
			}
			--_end;
			return pos;
		}

		T& operator[](size_t i)
		{
			return _start[i];
		}

	private:
		Iterator _start;
		Iterator _end;
		Iterator _endOfCapacity;
	};
}

//测试代码
//test1用于测试vector的初始化
void test1()
{
	LHZ::vector<int> first;
	LHZ::vector<int> second(4, 100);
	LHZ::vector<int> third(second.Begin(), second.End());
	LHZ::vector<int> fourth(third);

	int arr[] = { 1, 2, 3, 4 };
	LHZ::vector<int> fifth(arr, arr + sizeof(arr) / sizeof(arr[0]));
	for (LHZ::vector<int>::Iterator it = fifth.Begin(); it != fifth.End(); ++it)
	{
		cout << *it << ' ';
	}

	//测试字符串
	LHZ::vector<string> strV;
	strV.PushBack("hahhaha");
	strV.PushBack("nihao");
	strV.PushBack("nishizhuma");
	for (size_t i = 0; i < strV.Size(); ++i)
	{
		cout << strV[i] << " ";
	}
	cout << endl;
}

//打印函数
void Print(const LHZ::vector<int>& v)
{
	for (LHZ::vector<int>::ConstIterator it = v.CBegin(); it != v.CEnd(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

//测试：插入/删除/修改数据
void test2()
{
	LHZ::vector<int> v;
	for (size_t i = 0; i < 5; ++i)
	{
		v.PushBack(i);
	}
	Print(v);
	v.PopBack();
	Print(v);
	v.Insert(find(v.Begin(), v.End(), 3), 8);
	Print(v);
	v.Erase(find(v.Begin(), v.End(), 3));
	Print(v);
}

//测试：reserve/resize
void test3()
{
	//扩容问题
	LHZ::vector<int> v1;
	/*size_t sz = v1.Capacity();
	for (size_t i = 0; i < 100; ++i)
	{
		v1.PushBack(i);
		if (sz != v1.Capacity())
		{
			sz = v1.Capacity();
			cout << sz << " ";
		}
	}*/

	//刚开始就reserve(),看是否扩容
	LHZ::vector<int> v2;

	v2.Reserve(100);
	size_t sz = v2.Capacity();
	for (size_t i = 0; i < 100; ++i)
	{
		v2.PushBack(i);
		if (sz != v2.Capacity())
		{
			sz = v2.Capacity();
			cout << sz << " ";
		}
	}

	//resize
	LHZ::vector<int> v3;
	for (size_t i = 0; i < 10; ++i)
	{
		v3.PushBack(i);
	}
//	v3.Resize(5);
	Print(v3);

	v3.Resize(15, 10);
	Print(v3);
}

//operator[]
void test4()
{
	LHZ::vector<int> v;
	for (size_t i = 0; i < 5; ++i)
	{
		v.PushBack(i);
	}
	cout << v[3] << endl;
}

//迭代器失效问题
void test5()
{
	LHZ::vector<int> v;
	for (size_t i = 0; i < 4; ++i)
	{
		v.PushBack(i);
	}
	LHZ::vector<int>::Iterator it = find(v.Begin(), v.End(), 3);
	v.Erase(it);
	cout << *it << endl; //会非法访问
}

int main()
{
	test5();
	system("pause");
	return 0;
}