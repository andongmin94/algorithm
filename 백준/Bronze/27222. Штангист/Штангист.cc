#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int n = t;
    vector<int> v;
    while (t--)
    {
        int k; cin >> k;
        v.push_back(k);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        if (b - a > 0 && v[i]) sum += b - a;
    }
    cout << sum;
}
