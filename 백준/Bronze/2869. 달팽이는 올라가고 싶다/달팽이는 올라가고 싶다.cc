#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double A, B, V;
	cin >> A >> B >> V;

	cout << setprecision(17);
	cout << ceil((V - B) / (A - B));
}
