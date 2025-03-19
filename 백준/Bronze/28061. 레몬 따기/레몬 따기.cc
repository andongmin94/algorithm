#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;
    while (n--)
    {
        int t;
        cin >> t;
        t = t - (n + 1);
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout << v.back();
}
