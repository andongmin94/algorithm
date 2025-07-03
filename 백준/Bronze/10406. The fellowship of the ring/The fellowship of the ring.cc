#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, n, p; cin >> w >> n >> p;

    vector<int> v(p);
    for (int i = 0; i < p; i++)
        cin >> v[i];
    int cnt = 0;

    for (auto e : v)
    {
        if (e < w) continue;
        if (e > n) continue;
        cnt++;
    }
    cout << cnt;
}
