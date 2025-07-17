#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;
    while (n--)
    {
        int m; cin >> m;
        v.push_back(m);
    }
    int t = v[0];
    sort(v.begin(), v.end());
    if (t == v[0])
    {
        cout << "ez";
        return 0;
    }
    sort(v.begin(), v.end(), greater<int>());
    if (t == v[0])
    {
        cout << "hard";
        return 0;
    }
    cout << '?';
}
