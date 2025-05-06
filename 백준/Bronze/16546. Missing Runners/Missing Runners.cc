#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;

    vector<long long> v(n + 1, 1);
    n--;
    while (n--)
    {
        long long m; cin >> m;
        v[m]--;
    }
    for (long long i = 1; i <= v.size(); i++)
    {
        if (v[i])
        {
            cout << i;
            break;
        }
    }
}
