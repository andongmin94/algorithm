#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector<int> v;
    
    while (t--)
    {
        int n; cin >> n;
        v.push_back(n);
    }

    int cnt = 0;
    int flag = 0;
    for (auto e : v)
    {
        if (e)
        {
            flag++;
            cnt = flag > cnt ? flag : cnt;
        }
        else flag = 0;
    }
    cout << cnt;
}
