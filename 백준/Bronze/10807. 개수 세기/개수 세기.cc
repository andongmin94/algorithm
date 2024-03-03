#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& e : v)
        cin >> e;
    
    int k, cnt = 0;
    cin >> k;
    for (auto e : v)
        if (e == k) cnt++;
    cout << cnt;
}
