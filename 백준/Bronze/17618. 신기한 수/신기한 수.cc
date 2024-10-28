#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int j = 0;
		int k = i;
		while (k > 0)
		{
			j += k % 10;
			k /= 10;
		}
		if (i % j == 0) cnt++;
	}
	cout << cnt;
}
