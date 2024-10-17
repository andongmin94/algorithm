#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, cnt = 0;
		cin >> n >> k;
		while (n--)
		{
			int m;
			cin >> m;
			cnt += m / k;
		}
		cout << cnt << '\n';
	}
}
