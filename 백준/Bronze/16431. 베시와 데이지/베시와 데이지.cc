#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	int c, d;
	cin >> c >> d;
	int e, f;
	cin >> e >> f;

	int be = abs(e - a) > abs(f - b) ? abs(e - a) : abs(f - b);
	int da = abs(e - c) + abs(f - d);

	if (be < da) cout << "bessie";
	else if (be > da) cout << "daisy";
	else cout << "tie";
}
