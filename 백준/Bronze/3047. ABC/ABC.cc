#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());

    string s;
    cin >> s;
    for (const auto& e : s)
    {
        if (e == 'A') cout << v[0] << ' ';
        if (e == 'B') cout << v[1] << ' ';
        if (e == 'C') cout << v[2] << ' ';
    }
}
