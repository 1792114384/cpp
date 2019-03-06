
//#include <iostream>
//#include <string>
//
//using namespace std;

//
//void MaxNumber(const string& s, string& str)
//{
//	if (s.size() == 0)
//		return;
//	size_t size = s.size();
//	size_t i = 0;
//	size_t j = 0;
//	size_t start = 0;
//	size_t Max_len = 0;
//	size_t len = 0;
//	for (i = 0; i < size; ++i)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			for (j = i + 1; j < size; ++j)
//			{
//				if (s[j] < '0' || s[j] > '9')
//				{
//					if (j - i > len)
//					{
//						start = i;
//						Max_len = j - i;
//					}	
//					len = j - i;
//					break;
//				}
//			}
//			if (j == size)
//			{
//				if (j - i > len)
//				{
//					start = i;
//					len = j - i;
//				}
//				break;
//			}
//			i += len;
//		}
//	}
//	str = s.substr(start, Max_len);
//}
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	string str;
//	str.reserve(s.size());
//	MaxNumber(s, str);
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int tmp = 0;
	vector<int> v;
	while (cin >> tmp)
		v.push_back(tmp);

	sort(v.begin(), v.end());
	size_t start = 0;
	size_t len = 1;
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i] == v[i - 1])
		{
			len++;
		}
		else
		{
			if (len >= v.size() / 2)
			{
				cout << v[i - 1] << endl;
				break;
			}
			else
			{
				len = 0;
			}
		}
	}
	system("pause");
	return 0;
}