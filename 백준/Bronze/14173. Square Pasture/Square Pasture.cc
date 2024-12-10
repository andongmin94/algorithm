#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    int x_min = 10, x_max = 0, y_min = 10, y_max = 0;
    for (auto e : v)
    {
        if (e.first < x_min) x_min = e.first;
        if (x_max < e.first) x_max = e.first;
        if (e.second < y_min) y_min = e.second;
        if (y_max < e.second) y_max = e.second;
    }
    int k = max(x_max - x_min, y_max - y_min);
    cout << k * k;
}