#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(2 * b + 4 * c);
    v.push_back(2 * a + 2 * c);
    v.push_back(4 * a + 2 * b);
    sort(v.begin(), v.end());
    cout << v[0];
}