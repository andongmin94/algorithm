#include <bits/stdc++.h>

using namespace std;

int arr[1000000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<long long> v;
	for (int i = 0; i < N; i++)
	{
		long long a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.rbegin(), v.rend());

	for (auto e : v)
		cout << e << '\n';
}
