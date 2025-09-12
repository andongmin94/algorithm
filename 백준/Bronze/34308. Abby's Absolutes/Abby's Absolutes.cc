#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    vector<int> v;
    while (b--)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    for (auto e : v)
    {
        if (a - e < e - 1) cout << a;
        else cout << 1;
        cout << ' ';
    }
}