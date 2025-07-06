#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t; cin >> n >> t;
    n += n;

    int cnt = 0;
    bool b = true;
    while (t--)
    {
        if (b) cnt++;
        else cnt--;
        
        if (cnt == n) b = false;
        if (cnt == 1) b = true;
    }
    cout << cnt;
}
