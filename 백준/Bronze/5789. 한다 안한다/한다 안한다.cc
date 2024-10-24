#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		cout << "Do-it";
		if (s[s.length() / 2 - 1] == s[s.length() / 2]) cout << "";
		else cout << "-Not";
		cout << '\n';
	}
}
