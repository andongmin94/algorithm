#include <bits/stdc++.h>

using namespace std;

int arr[1000000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int cnt = 0;
	while (true)
	{
		cnt++;
		int sum = cnt;
		int divider = sum;

		while (divider > 0)
		{
			sum += divider % 10;
			divider /= 10;
		}

		if (sum == N)
		{
			cout << cnt;
			break;
		}

		if(N <= cnt)
		{
			cout << 0;
			break;
		}
	}
}
