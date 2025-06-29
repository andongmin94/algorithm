#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (i % 10 == k % 10) continue;
        if (i % 10 == (k * 2) % 10) continue;

        v.push_back(i);
    }
    cout << v.size() << '\n';
    for (auto e : v)
        cout << e << ' ';
}
