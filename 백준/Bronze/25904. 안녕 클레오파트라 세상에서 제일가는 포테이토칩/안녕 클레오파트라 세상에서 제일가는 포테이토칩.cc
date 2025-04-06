#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int cnt = 1;
    while (true)
    {
        if (v[cnt - 1] < x) break;
        x++;
        cnt++;
        if (cnt > v.size()) cnt %= v.size();
    }
    cout << cnt;
}
