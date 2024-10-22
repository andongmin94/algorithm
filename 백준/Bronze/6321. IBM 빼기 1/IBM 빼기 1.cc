#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cout << "String #" << i << '\n';
		string s;
		cin >> s;
		for (auto e : s)
			if (e == 'Z') cout << 'A';
			else cout << static_cast<char>(e + 1);
		cout << "\n\n";
	}
}
