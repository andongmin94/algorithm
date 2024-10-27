#include <bits/stdc++.h>
#include <chrono>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		string s, s2 = "";
		getline(cin, s);
		stringstream ss(s);
		int num, sum = 0;
		
		while (ss >> num)
		{
			sum += num;
		}

		cout << sum << '\n';
	}
}
