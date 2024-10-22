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
		int m;
		cin >> m;

		vector<int> v;
		while (m--)
		{
			int k;
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(), v.end());
		cout << v.front() << ' ' << v.back() << '\n';
	}
}
