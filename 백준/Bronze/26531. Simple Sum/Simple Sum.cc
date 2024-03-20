#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    
    if (static_cast<int>(s[0] - '0') + static_cast<int>(s[4] - '0') == static_cast<int>(s[8] - '0')) cout << "YES";
    else cout << "NO";
}
