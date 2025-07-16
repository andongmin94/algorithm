#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, h; cin >> n >> w >> h;
    long long m = sqrt(w * w + h * h);
    while (n--)
    {
        long long t; cin >> t;
        if (t <= m) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}
