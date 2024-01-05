#include <bits/stdc++.h>

using namespace std;

int arr[1000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[j] < arr[i])
				swap(arr[j], arr[i]);

	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';
}
