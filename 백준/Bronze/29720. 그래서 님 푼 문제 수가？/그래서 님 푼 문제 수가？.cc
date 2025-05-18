#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k; cin >> n >> m >> k;

    int a = n - m * k, b = n - m * k + m - 1;
    cout << (a >= 0 ? a : 0) << ' ' << b;  
}
