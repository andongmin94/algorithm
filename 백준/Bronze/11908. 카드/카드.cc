#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0; cin >> n;
    vector<int> v;
    while (n--)
    {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.pop_back();
    for (auto e : v)
        sum += e;
    cout << sum;
}
