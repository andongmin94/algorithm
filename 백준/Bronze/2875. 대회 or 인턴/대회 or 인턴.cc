#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    while(k--)
    {
        if (n > m * 2) n--;
        else m--;
    }
    int cnt = 0;
    while(n >= 2 && m >= 1)
    {
        n -= 2;
        m -= 1;
        cnt++;
    }
    cout << cnt;
}
