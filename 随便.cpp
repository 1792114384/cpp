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
//	stu.SetStudentInfo("zhu", "男", 18);
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
//	//参数必须是类对象的引用,单参
//	//一般情况下用的 const 的引用
//	//为什么一定要用引用？？会出现死循环的情况
//	Date(const Date& d)
//	{
//		_year = d._day;
//		_month = d._month;
//		_day = d._day;
//	}
//	//不能有引用返回,运算符的重载也是一个函数，可以提高代码的可读性
//	//至少要有一个自定义类型（类类型）的参数，因为对于内置类型编译器自己就可以处理
//	Date operator+(int days)
//	{
//		Date temp(*this);
//		temp._day = temp._day + days;
//		return temp;
//	}
//
//	Date& operator=(const Date& d) //连续赋值的规则，传引用可以提高效率
//	{
//		//防止自己给自己赋值
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
//	//前置++
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//	//后置++
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
//	a = b = c; //c先给b赋值，b再给a赋值
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
//	//初始化列表中各个成员变量的出现先后次序与初始化次序无关
//	//按照成员在类中的声明次序进行初始化
//	//建议：初始化列表中成员次序与成员在类中声明次序保持一致
//	//		尽量避免使用成员变量初始化成员
//
//	//初始化列表中不存在this指针，因为初始化之前对象还没有创建好，哪里来的对象
//
//	//引用类型的变量，const类型的变量必须显式初始化，编译器不会帮助我们初始化
//	//并且一定要放在初始化列表的位置
//	Date(int year = 2018, int month = 12, int day = 9)
//		:_year(year)   //初始化列表的作用，完成类中各个成员变量的初始化
//		,_month(month) //初始化变量的顺序和类中成员变量声明的次序有关
//		,_day(day)	   //最好给成成员变量声明次序一致
//	{
//		//在构造函数体中，只是一种赋值的操作，并不是初始化
//		//初始化需要为变量创建空间
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
////	//在编译阶段，编译器还不能确定具体调用哪个类的虚函数
////	//只有在代码运行阶段，才能确定到底调用哪个类的虚函数
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
	m.insert(pair<string, string>("小猪佩奇", "猪"));
	m.insert(make_pair("加菲猫", "猫"));
	m.insert(make_pair("hshhhh", "哈"));
	m["鲁智深"] = "花和尚";
	m["小猪佩奇"] = "asd";
	cout << m["小猪佩奇"] << endl;
	// []相当于先按 key 插入，如果失败，返回value
	//                        如果key不存在，插入，返回空字符串
	cout << m["加菲猫"] << endl;
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










