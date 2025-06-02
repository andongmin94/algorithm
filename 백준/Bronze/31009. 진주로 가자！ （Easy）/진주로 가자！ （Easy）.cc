#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> m;
    int n, cnt = 0, l; cin >> n;
    
    while (n--)
    {
        string a;
        int b;
        cin >> a >> b;
        m[a] = b;
        if (a == "jinju") l = b;
    }
    for (auto e : m)
    {
        if (e.second > l) cnt++;
    }
    
    cout << l << '\n' << cnt;
}
