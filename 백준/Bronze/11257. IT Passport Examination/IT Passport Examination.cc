#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << a << " " << b + c + d;
        if (b + c + d >= 55 && b >= 11 && c >= 8 && d >= 12)
            cout << " PASS" << '\n';
        else cout << " FAIL" << '\n';
    }
}
