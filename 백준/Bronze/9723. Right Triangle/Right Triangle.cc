#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int cnt = 1;
    while (t--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());

        cout << "Case #" << cnt++ << ": ";
        if (pow(v[0], 2) + pow(v[1], 2) == pow(v[2], 2)) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}
