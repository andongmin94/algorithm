#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> ab(2);
    vector<int> xy(2);
    cin >> ab[0] >> ab[1] >> xy[0] >> xy[1];

    sort(ab.begin(), ab.end());
    sort(xy.begin(), xy.end());
    int dis1 = ab[1] - ab[0];
    int dis2 = abs(ab[0] - xy[0]) + abs(ab[1] - xy[1]);
    cout << min(dis1, dis2);
}
