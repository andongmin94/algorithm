#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	int cnt = 0;
	int b = 0;

	while (b++ <= 500)
	{
		int a = pow(b, 2) + n;
		if (static_cast<int>(sqrt(a)) == sqrt(a))
			cnt++;
	}
	cout << cnt;
}
