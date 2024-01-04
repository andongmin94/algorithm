#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	deque<int> d;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a;
		cin >> a;
		if (a == "push_back")
		{
			int b;
			cin >> b;
			d.push_back(b);
		}
		else if (a == "push_front")
		{
			int b;
			cin >> b;
			d.push_front(b);
		}
		else if (a == "front")
		{
			if (d.size() != 0)
				cout << d.front() << '\n';
			else cout << -1 << '\n';
		}
		else if (a == "back")
		{
			if (d.size() != 0)
				cout << d.back() << '\n';
			else cout << -1 << '\n';
		}
		else if (a == "size")
			cout << d.size() << '\n';
		else if (a == "empty")
		{
			if (d.size() != 0)
				cout << 0 << '\n';
			else cout << 1 << '\n';
		}
		else if (a == "pop_front")
		{
			if (d.size() != 0)
			{
				cout << d.front() << '\n';
				d.pop_front();
			}
			else cout << -1 << '\n';
		}
		else if (a == "pop_back")
		{
			if (d.size() != 0)
			{
				cout << d.back() << '\n';
				d.pop_back();
			}
			else cout << -1 << '\n';
		}
	}
}
