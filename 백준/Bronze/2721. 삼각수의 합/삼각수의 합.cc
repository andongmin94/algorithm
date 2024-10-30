#include <bits/stdc++.h>

using namespace std;

int f(int x)
{
	int sum = 0;
	for (int i = 0; i <= x; i++)
		sum += i;
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n, sum = 0;
		cin >> n;

		for (int k = 1; k <= n; k++)
		{
			sum += k * f(k + 1);
		}
		cout << sum << '\n';
	}
}
