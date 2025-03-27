#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int max = 0;
    while (n--)
    {
        vector<int> r(2), t(5);
        for (auto& e : r)
            cin >> e;
        for (auto& e : t)
            cin >> e;
        sort(r.begin(), r.end(), greater<int>());
        sort(t.begin(), t.end(), greater<int>());
        if (max < r[0] + t[0] + t[1]) max = r[0] + t[0] + t[1];
    }
    cout << max;
}

