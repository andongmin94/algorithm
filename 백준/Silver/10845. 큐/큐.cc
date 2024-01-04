#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	queue<int> q;

	for (int i = 0; i < N; i++)
	{
		string a;
		cin >> a;
		if (a == "push")
		{
			int b;
			cin >> b;
			q.push(b);
		}
		else if (a == "front")
		{
			if (!(q.empty()))
				cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else if (a == "back")
		{
			if (!(q.empty()))
				cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
		else if (a == "size")
			cout << q.size() << '\n';
		else if (a == "pop")
		{
			if (!(q.empty()))
			{
				cout << q.front() << '\n';
				q.pop();
			}				
			else cout << -1 << '\n';
		}
		else if (a == "empty")
		{
			if (!(q.empty()))
				cout << 0 << '\n';
			else cout << 1 << '\n';
		}
	}
}
