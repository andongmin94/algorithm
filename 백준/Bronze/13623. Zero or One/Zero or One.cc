#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;
	if (A == B && B == C)
		cout << "*";
	else if (A == B && B != C)
		cout << "C";
	else if (A != B && B == C)
		cout << "A";
	else cout << "B";
}
