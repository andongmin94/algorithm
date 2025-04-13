#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<string> v;
    
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int max = 0, res = 0;
    
    for (auto s : v)
    {
        int cnt = 0;
        if (s[0] == '1') cnt++;
        for (int i = 1; i < l; i++)
        {
            if (s[i] != s[i - 1] && s[i] == '1') cnt++;
        }
        if (max < cnt) max = cnt;
    }
    for (auto s : v)
    {
        int cnt = 0;
        if (s[0] == '1') cnt++;
        for (int i = 1; i < l; i++)
        {
            if (s[i] != s[i - 1] && s[i] == '1') cnt++;
        }
        if (max == cnt) res++;
    }
    cout << max << ' ' << res;
}
