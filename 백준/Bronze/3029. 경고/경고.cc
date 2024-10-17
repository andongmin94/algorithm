#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int h, m, s;
	char q;
	cin >> h >> q >> m >> q >> s;

	int h2, m2, s2;
	cin >> h2 >> q >> m2 >> q >> s2;

	int cnt = 0;

	if (h == h2 && m == m2 && s == s2) cout << "24:00:00";
	else {
		if (s2 >= s) cnt += s2 - s;
		else
		{
			cnt += s2 + (60 - s);
			m2--;
		}
		if (m2 >= m) cnt += (m2 - m) * 60;
		else
		{
			cnt += (m2 + (60 - m)) * 60;
			h2--;
		}
		if (h2 >= h) cnt += (h2 - h) * 3600;
		else
		{
			cnt += (h2 + (24 - h)) * 3600;
		}

		if (cnt / 3600 < 10) cout << 0 << cnt / 3600 << ':';
		else cout << cnt / 3600 << ':';
		cnt %= 3600;

		if (cnt / 60 < 10) cout << 0 << cnt / 60 << ':';
		else cout << cnt / 60 << ':';
		cnt %= 60;

		if (cnt < 10) cout << 0 << cnt;
		else cout << cnt;
	}
}
