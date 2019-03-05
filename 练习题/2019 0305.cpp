
#include <iostream>
#include <vector>
using namespace std;

int Number(vector<int> v, int n)
{
	v.push_back(0);
	n = v.size();
	if (v.size() < 3)
		return 1;
	int count = 0;
	int i = 0;
	int j = 0;
	do
	{
		if (v[i] > v[i + 1])
		{
			for (j = i + 1; j < n - 1; j++)
			{
				if (v[j] < v[j + 1])
				{
					i = j + 1;
					count++;
					break;
				}
				if (j == n - 1)
				{
					i = j;
				}
			}
		}
		else
		{
			for (j = i + 1; j < n - 1; j++)
			{
				if (v[j] > v[j + 1])
				{
					i = j + 1;
					count++;
					break;
				}	
			}
			
		}
		if (j == n)
		{
			i = j;
			count++;
			return count;
		}
	} while (i < n);
	return count;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int tmp = 0;
		cin >> tmp;
		v.push_back(tmp);
	}
	int ret = Number(v, n);
	cout << ret << endl;
	system("pause");
	return 0;
}


//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	vector<char> v;
//	//v.resize(s.size());
//	int end = s.size() - 1;
//	int count = 0;
//	for (int i = s.size() - 1; i >= 0; --i)
//	{
//		if (s[i] == ' ' || i == 0)
//		{
//			if (i == 0)
//				v.push_back(' ');
//			for (int j = i; j <= end; ++j)
//			{
//				count++;
//				if (count == 1)
//					++j;
//				v.push_back(s[j]);
//			}
//			
//			end = i - 1;
//		}
//	}
//	v.push_back('\n');
//	for (auto it : v)
//		cout << it;
//	system("pause");
//	return 0;
//}