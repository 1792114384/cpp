//#include <iostream>
//
//namespace N1
//{
//	int a = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//namespace N2
//{
//	int a = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N3
//	{
//		int c = 5;
//		int d = 30;
//		int sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//
//int main()
//{
//	printf("%d\n", N2::N3::c);
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "ni shi zhu" << endl;
//	int a;
//	double c;
//	int arr[10];
//	cin >> a;
//	cin >> c;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i] = i;
//	}
//	cout << "a = " << a << endl;
//	cout << "c = " << c << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << "arr[" << i << "] = " << i << endl;
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//

//void Swap(int& ra, int& rb)
//{
//	int tmp = ra;
//	ra = rb;
//	rb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	cout << a << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'd';
//	int *p = nullptr;
//	auto d = p;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Testfunc(int a, int b, int c = 30)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//
//int main()
//{
//	Testfunc(1, 20, 40);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Func(int a)
//{
//
//}
//
//void Func(int a = 10)
//{
//
//}
//
//int main()
//{
//	Func();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int add(int& ra, int& rb)
//{
//	return ra + rb;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int rc = add(a, b);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int x = 10;
//	auto ra = &x;

//	auto* rc = &x;
//	auto rb = ra;
//	/*cout << typeid(d).name() << endl;
//	cout << typeid(b).name() << endl;*/
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void func(int a = 10)
//{
//	cout << "hahaha" << endl;
//}
//
//void func(int a)
//{
//	cout << "hehehe" << endl;
//}
//
//int main()
//{
//	func(2);
//	//func();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int& Add(int& ra, int& rb)
//{
//	return ra + rb;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& rc = Add(a, b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int b = 20;
//	ra = b;
//	system("pause");
//	return 0;
//}

//class Student
//{
//public:
//	void SetStudentInfo(const char *name,const char *gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//
//	void PrintInfo();
//
//private:
//	char _name[20];
//	char _gender[2];
//	int _age;
//};
//
//void Student::PrintInfo()
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
//
//int main()
//{
//	Student stu;
//	stu.SetStudentInfo("zhu", "��", 18);
//	stu.PrintInfo();
//	system("pause");
//	return 0;
//}

//class Time
//{
//private:
//	int _hour;
//	int _minute;
//	int _seconds;
//};
//
//class Date
//{
//public:
//	Date()
//	{
//		_year = 2018;
//		_month = 11;
//		_day = 25;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//int main()
//{
//	Date d2(2018, 11, 26);
//	Date d1;
//	d1.Display();
//	d2.Display();
//	system("pause");
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	 
//	void Display() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	mutable int _year;
//	int _month;
//	int _day;
//};

//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//
//	const Date* operator&() const
//	{
//		return this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	
//	system("pause");
//	return 0;
//}

//class SeqList
//{
//public:
//	SeqList(int n, int data)
//	{
//		_array = (int *)malloc(sizeof(int) * n);
//		for (int i = 0; i < n; ++i)
//		{
//			_array[i] = data;
//		}
//		_capacity = n;
//		_size = n;
//	}
//
//	~SeqList()
//	{
//		if (_array)
//		{
//			free(_array);
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	int* _array;
//	size_t _capacity;
//	size_t _size;
//};
//
//void test()
//{
//	SeqList s1(10, 5);
//	SeqList s2(s1);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//
//class Date
//{
//public:
//	Date()
//	{
//
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//��������������������,����
//	//һ��������õ� const ������
//	//Ϊʲôһ��Ҫ�����ã����������ѭ�������
//	Date(const Date& d)
//	{
//		_year = d._day;
//		_month = d._month;
//		_day = d._day;
//	}
//	//���������÷���,�����������Ҳ��һ��������������ߴ���Ŀɶ���
//	//����Ҫ��һ���Զ������ͣ������ͣ��Ĳ�������Ϊ�����������ͱ������Լ��Ϳ��Դ���
//	Date operator+(int days)
//	{
//		Date temp(*this);
//		temp._day = temp._day + days;
//		return temp;
//	}
//
//	Date& operator=(const Date& d) //������ֵ�Ĺ��򣬴����ÿ������Ч��
//	{
//		//��ֹ�Լ����Լ���ֵ
//		if (this != &d)
//		{
//			_day = d._day;
//			_month = d._month;
//			_year = d._year;
//		}
//		return *this;
//	}
//
//	bool operator<(const Date& d)
//	{}
//
//	//ǰ��++
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//	//����++
//	Date operator++(int)
//	{
//
//	}
//
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	a = b = c; //c�ȸ�b��ֵ��b�ٸ�a��ֵ
//	Date d1(2018, 12, 12);
//	d1.Display();
//	Date d2;
//	d2 = d1;
//	d2.Display();
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//{
//public:
//	//��ʼ���б��и�����Ա�����ĳ����Ⱥ�������ʼ�������޹�
//	//���ճ�Ա�����е�����������г�ʼ��
//	//���飺��ʼ���б��г�Ա�������Ա�������������򱣳�һ��
//	//		��������ʹ�ó�Ա������ʼ����Ա
//
//	//��ʼ���б��в�����thisָ�룬��Ϊ��ʼ��֮ǰ����û�д����ã��������Ķ���
//
//	//�������͵ı�����const���͵ı���������ʽ��ʼ��������������������ǳ�ʼ��
//	//����һ��Ҫ���ڳ�ʼ���б��λ��
//	Date(int year = 2018, int month = 12, int day = 9)
//		:_year(year)   //��ʼ���б�����ã�������и�����Ա�����ĳ�ʼ��
//		,_month(month) //��ʼ��������˳������г�Ա���������Ĵ����й�
//		,_day(day)	   //��ø��ɳ�Ա������������һ��
//	{
//		//�ڹ��캯�����У�ֻ��һ�ָ�ֵ�Ĳ����������ǳ�ʼ��
//		//��ʼ����ҪΪ���������ռ�
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void PrintDate()const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2018, 11, 11);
//	d1.PrintDate();
//	return 0;
//}

//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		if (s.empty())
//		{
//			return -1;
//		}
//
//		int arr[26] = { 0 };
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			arr[s[i] - 'a']++;
//		}
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			if (arr[s[i] - 'a'] == 1)
//			{
//				return i;
//			}
//		}
//
//		return -1;
//	}
//};
//
//int main()
//{
//	string s;
//	Solution a;
//	cin >> s ;
//	cout << s << endl;
//
//	int ret = a.firstUniqChar(s);
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string reverseWords(string s) {
//		if (s.empty()) {
//			return s;
//		}
//
//		int count = 0;
//		int ret = 0;
//		int end = s.size();
//
//		for (int i = 0; i < end; ++i) {
//			count++;
//			if (s[i] == ' ') {
//				reverse(s.begin() + ret, s.begin() + ret + count - 1);
//				ret += count;
//				count = 0;

//			}
//
//		}
//		reverse(s.begin() + ret, s.end());
//		return s;
//	}
//};
//
//int main()
//{
//	string s1("Let's take LeetCode contest");
//	Solution a;
//	cout << a.reverseWords(s1) << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution 
//{
//public:
//	string letterMap[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//
//	void CombinStr(const string& digits, size_t index, vector<string> strs, const string& str)
//	{
//		string letters = letterMap[digits[index] - '0'];
//
//		for (size_t i = 0; i < letters.size(); ++i)
//		{
//			CombinStr(digits, index + 1, strs, str + letters[i]);
//		}
//	}
//
//	vector<string> letterCombinations(string digits)
//	{
//		vector<string> strs;
//		if (digits.empty())
//		{
//			return strs;
//		}
//
//		string str;
//		size_t index = 0;
//		CombinStr(digits, index, strs, str);
//
//		return strs;
//	}
//};

//void test()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
//	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
//	v.insert(pos, 30);
//	pos = find(v.begin(), v.end(), 4);
//	v.insert(pos, arr, arr + sizeof(arr) / sizeof(arr[0]));
//	for (auto i : v)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.empty())
//			return 0;
//
//		vector<int>::iterator it;
//		for (it = nums.begin() + 1; it < nums.end(); ++it)
//		{
//			if (*it == )
//		}
//	}
//};
//
//int main()
//{
//	Solution a;
//	int nums[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
//	vector<int> v(nums, nums + sizeof(nums) / sizeof(nums[0]));
//	a.removeDuplicates(v);
//	v.erase(find(v.begin(), v.end(), 1));
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//
//using namespace std;
//
//bool IfEqualThree(int ret)
//{
//	return ret == 3;
//}
//
//void test()
//{
//	list<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.remove_if(IfEqualThree);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
////class Base
////{
////public :
////	virtual void test1()
////	{
////		cout << "nishizhu" << endl;
////	}
////
////	virtual void test2()
////	{
////		cout << "zhu2" << endl;
////	}
////
////	void test3()
////	{
////		cout << "zhu3" << endl;
////	}
////
////	virtual void test3(int)
////	{
////		cout << "zhu3" << endl;
////	}
////};
////
////class Deriver : public Base
////{
////public :
////	virtual void test()
////	{
////		cout << "wang" << endl;
////	}
////
////	void test2()
////	{
////		cout << "wang2" << endl;
////	}
////
////	void test3()
////	{
////		cout << "wang3" << endl;
////	}
////};
////
////void TestVirtual(Base& b)
////{
////	//�ڱ���׶Σ�������������ȷ����������ĸ�����麯��
////	//ֻ���ڴ������н׶Σ�����ȷ�����׵����ĸ�����麯��
////	b.test();
////}
////
////int main()
////{
////	Base b;
////	Deriver d;
////	TestVirtual(b);
////	TestVirtual(d);
////	system("pause");
////	return 0;
////}
//
//class Base
//{
//public:
//	virtual void Ha()
//	{
//		cout << "sa" << endl;
//	}
//	int a;
//};
//
//class Driver : public Base
//{
//	virtual void Ha()
//	{
//		cout << "ha" << endl;
//	}
//};
//
//typedef void(*PVF)(); 
//
//int main()
//{
//	Base b;
//	PVF* pVF = (PVF*)(*(int*)&b);
//	(*pVF)();
//	system("pause");
//	return 0;

//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + 3)
;
//	cout << v.capacity() << endl;
//	
//	while (1)
//	{
//		vector<int>::iterator pos = find(v.begin(), v.end(), 2);
//		v.insert(pos, 5);
//		//v.push_back(5);
//		//v.push_back(5);
//	}
//	system("pause");
//	return 0;
//}


#include <iostream>
using namespace std;

#include <map>
#include <string>

void test()
{
	map<string, string> m;
	m.insert(pair<string, string>("С������", "��"));
	m.insert(make_pair("�ӷ�è", "è"));
	m.insert(make_pair("hshhhh", "��"));
	m["³����"] = "������";
	m["С������"] = "asd";
	cout << m["С������"] << endl;
	// []�൱���Ȱ� key ���룬���ʧ�ܣ�����value
	//                        ���key�����ڣ����룬���ؿ��ַ���
	cout << m["�ӷ�è"] << endl;
	cout << m.size() << endl;
	cout << m["asd"] << endl;
}

void test2()
{
	int arr[] = { 5, 4, 8, 3, 7 ,1 ,6 ,2 ,9 };
	map<int, int> m;
	for (auto e : arr)
		m.insert(make_pair(e, e));
	map<int, int>::iterator it = m.begin();
	while (it != m.end())
	{
		cout << it->first << ":" << it->second << endl;
		++it;
	}

	for (auto& e : m)
	{
		cout << e.first << ":" << e.second << endl;
	}
}

int main()
{
	test2();
	system("pause");
	return 0;
}










