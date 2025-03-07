#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s_; cin >> s >> s_;

    vector<int> v;
    v.push_back(min(abs(s[0] - s_[0]), abs(s[1] - s_[1])));
    v.push_back(max(abs(s[0] - s_[0]), abs(s[1] - s_[1])));
    cout << v[0] << ' ' << v[1];
}
