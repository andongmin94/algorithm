#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, v;
    cin >> n >> h >> v;

    cout << ((n - h > h) ? n - h : h) * ((n - v > v) ? n - v : v) * 4 << '\n';
}
