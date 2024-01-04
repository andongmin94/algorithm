#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> q;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		q.push(i + 1);

	while (q.size() != 1)
	{
		q.pop();
		if (q.size() != 1)
		{
			q.push(q.front());
			q.pop();
		}
	}

	cout << q.front();
}
