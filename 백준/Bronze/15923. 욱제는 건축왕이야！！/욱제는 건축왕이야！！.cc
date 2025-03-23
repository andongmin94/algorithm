#include <bits/stdc++.h>

using namespace std;

struct d
{
    int x, y;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<d> v;
    
    int n;
    double ans = 0;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].x >> v[i].y;
    for (int i = 0; i < v.size(); i++)
    {
        double l;
        if (!i) l = sqrt(pow(v[0].x - v[n - 1].x, 2) + pow(v[0].y - v[n - 1].y, 2));
        else l = sqrt(pow(v[i].x - v[i - 1].x, 2) + pow(v[i].y - v[i - 1].y, 2));
        ans += l;
    }
    cout << ans;
}
