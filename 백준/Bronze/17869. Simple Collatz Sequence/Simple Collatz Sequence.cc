#include <bits/stdc++.h>

using namespace std;

long long func(long long n, int cnt)
{
    if (n == 1) return cnt;
    if (n % 2) n++;
    else n /= 2;
    return func(n, ++cnt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; cin >> n;
    cout << func(n, 0);
}
