#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int cnt = 1;
    vector<int> v;
    while (cnt <= n)
    {
        if (n % cnt == 0) v.push_back(cnt++);
        else cnt++;
    }
    cnt = 0;
    for (auto e : v)
        cnt += e;
    cout << cnt;
}
