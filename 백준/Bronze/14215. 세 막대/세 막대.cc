#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    while (v[2] >= v[0] + v[1])
    {
        v[2] -= 1;
    }
    cout << v[0] + v[1] + v[2];
}
