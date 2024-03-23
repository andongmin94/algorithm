#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());
    
    if (v[0] + v[1] == v[2]) cout << 1;
    else if (v[0] * v[1] == v[2]) cout << 2;
    else cout << 3;
}