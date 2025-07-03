#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k; cin >> n >> k;

    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        k /= 2;
    }
    cout << k;
}
