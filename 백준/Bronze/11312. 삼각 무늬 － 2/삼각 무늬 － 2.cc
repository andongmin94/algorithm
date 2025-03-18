#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        cout << (long long)ceil(a/b * a/b) << '\n';
    }
}
