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
        int p, t;
        cin >> p >> t;

        p -= t / 7;
        p += t / 4;
        cout << p << '\n';
    }
}
