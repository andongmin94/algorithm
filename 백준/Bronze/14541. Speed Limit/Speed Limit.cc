#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n; cin >> n;
        if (n == -1) break;

        vector<pair<int,int>> v;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int sum = 0;
        sum += v[0].first * v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            sum += v[i].first * (v[i].second - v[i - 1].second);
        }
        cout << sum << " miles\n";
    }
}
