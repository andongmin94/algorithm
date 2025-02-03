#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<int> v(n + 1,0);
    while (m--)
    {
        int a, b; cin >> a >> b;
        v[a]++;
        v[b]++;
    }
    for (int i = 1 ; i <= n; i++)
        cout << v[i] << '\n';
}
