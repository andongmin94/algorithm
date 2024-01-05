#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	while (true)
	{
		double N;
		cin >> N;
		if (N == 0)
			break;

		double ans = 1 + N + N * N + N * N * N + N * N * N * N;

		cout << setprecision(2) << fixed;
		cout << ans << '\n';
	}
}
