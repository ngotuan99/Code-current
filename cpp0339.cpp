#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		map<char, int> mp;
		for (char x : s)
		{
			mp[x]++;
		}
		int res = s.size();
		for (auto it : mp)
		{
			if (it.second > 1)
			{
				res += it.second*(it.second-1)/2;
			}
		}
		cout << res;
		cout << endl;
	}
}