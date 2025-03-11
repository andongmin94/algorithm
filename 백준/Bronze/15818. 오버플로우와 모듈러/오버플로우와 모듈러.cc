#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    long long sum = 1;
    while (n--)
    {
        int a; cin >> a;
        sum *= (a % m);
        sum %= m;
    }
    cout << sum;
}
