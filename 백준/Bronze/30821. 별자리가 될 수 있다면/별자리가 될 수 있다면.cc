#include <bits/stdc++.h>

using namespace std;

long long comb(long long n, long long r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    long long res = 1;
    for (long long i = 1; i <= r; i++)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    cout << comb(n, 5);
}
