#include <bits/stdc++.h>

using namespace std;

int sol(const string& s) {
    int start = 1;
    string chk = "";
    
    while (s.length() != chk.length()) {
        chk += to_string(start);
        if (s.substr(0, chk.length()) != chk)
            return -1;

        start++;
    }
    
    start--;
    
    if (chk == s)return start;
    else return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << sol(s);
    return 0;
}

