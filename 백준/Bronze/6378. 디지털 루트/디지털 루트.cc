#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<string> v;
	while (true)
	{
		string s;
		cin >> s;
		if (s != "0") v.push_back(s);
		else break;
	}

	for (auto e : v)
	{
		string s = e;
		while (s.length() != 1)
		{
			int a = 0;
			for (auto e2 : s)
			{
				a += e2 - '0';
			}
			s = to_string(a);
		}
		cout << s << '\n';
	}
}
