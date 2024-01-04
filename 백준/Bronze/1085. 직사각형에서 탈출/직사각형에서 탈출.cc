#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int c = w - x;
	int d = h - y;

	vector<int> counter;
	counter.push_back(x);
	counter.push_back(y);
	counter.push_back(c);
	counter.push_back(d);
	sort(counter.begin(), counter.end());
	cout << counter[0];
}
