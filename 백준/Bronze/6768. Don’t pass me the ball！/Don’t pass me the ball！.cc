#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (n < 4) cout << 0 << '\n';
    else
    {
        int a = n - 1;
        long long cnt = a * (a - 1) * (a - 2) / 6;\
        cout << cnt;
    }
}
