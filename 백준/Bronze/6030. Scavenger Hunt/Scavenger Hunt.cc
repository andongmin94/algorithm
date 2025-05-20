#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q; cin >> p >> q;

    vector<int> x, y;

    for (int i = 1; i <= p; i++)
        if (p % i == 0) x.push_back(i);
    for (int i = 1; i <= q; i++)
        if (q % i == 0) y.push_back(i);

    for (auto e : x)
        for (auto e_ : y)
            cout << e << ' ' << e_ << '\n';
}
