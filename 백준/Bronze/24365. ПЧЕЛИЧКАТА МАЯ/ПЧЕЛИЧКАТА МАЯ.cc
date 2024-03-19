#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <pair<int,int>> v(3);
    
    cin >> v[0].first >> v[1].first >> v[2].first;

    v[0].second = 0; v[1].second = 1; v[2].second = 2;
    
    int avg = (v[0].first + v[1].first + v[2].first) / 3;
    
    cout << 2 * (avg - v[0].first) + (avg - v[1].first);
}
