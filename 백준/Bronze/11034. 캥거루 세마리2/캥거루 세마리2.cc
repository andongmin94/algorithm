#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    while (cin >> v[0] >> v[1] >> v[2])
    {
        cout << max(v[1] - v[0], v[2] - v[1]) - 1 << '\n';
    }
}
