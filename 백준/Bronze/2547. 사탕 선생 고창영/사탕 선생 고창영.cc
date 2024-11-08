#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int cnt = m;
        long long sum = 0;
        while(m--)
        {
            long long k;
            cin >> k;
            sum += k;
            sum %= cnt;
        }
        if (sum % cnt) cout << "NO\n";
        else cout << "YES\n";
    }
}