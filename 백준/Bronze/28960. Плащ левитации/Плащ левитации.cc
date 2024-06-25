#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c <= b && d <= 2 * a  || (d <= b && c <= 2 * a)) cout << "YES";
    else cout << "NO";
}
