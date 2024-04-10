#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if (n <= 1000) cout << n << ' ' << n * a << '\n';
        else cout << n << ' ' << a * 1000 + (n - 1000) * b << '\n';
    }
}
