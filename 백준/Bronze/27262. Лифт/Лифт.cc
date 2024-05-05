#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a, b;
    cin >> n >> k >> a >> b;

    cout << (k-1) * b + (n-1) * b << ' ';
    cout << (n-1) * a;
}
