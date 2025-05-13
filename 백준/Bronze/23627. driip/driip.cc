#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    string s_ = "";
    s_ += s[s.length()-5];
    s_ += s[s.length()-4];
    s_ += s[s.length()-3];
    s_ += s[s.length()-2];
    s_ += s[s.length()-1];
    if (s_ == "driip") cout << "cute";
    else cout << "not cute";
}
