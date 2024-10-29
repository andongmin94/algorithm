#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int max_ = 0;

		while (true)
		{
			if (pow(max_, 2) + max_ <= m)
				max_++;
			else
			{
				max_--;
				break;
			}
		}
		cout << max_ << '\n';
	}
}
