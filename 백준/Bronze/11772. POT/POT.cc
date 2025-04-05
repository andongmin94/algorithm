#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long l = 0;
    while (n--)
    {
        string s, s2 = "";
        cin >> s;
        s2 += s[s.length()-1];
        s = s.substr(0, s.length() - 1);
        l += pow(stoi(s), stoi(s2));
    }
    cout << l;
}
