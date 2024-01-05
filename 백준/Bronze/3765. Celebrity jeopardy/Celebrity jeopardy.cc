#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		string s;
		getline(cin, s);
		cout << s << '\n';
		bool check = true;
		for (auto e : s)
			if (e == '=')
				check = false;
		if (check)
			break;
	}
}