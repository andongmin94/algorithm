#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    vector<char> v;
    vector<char> v2;

    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cnt++;
        v.push_back(s[i]);
        if (cnt % 3 == 0 && cnt != s.size()) v.push_back(',');
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        v2.push_back(v[i]);
    }
    for (auto e : v2)
        cout << e;
}
