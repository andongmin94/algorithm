#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0;

    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (a >= 10 && b >= 10 && abs(a - b) >= 2) break;
        else if (abs(a - b) >= 4) break;
        
        if (s[i] == '1' || s[i] == '2')
        {
            if (s[i-1] == 'A') a += static_cast<int>(s[i]) - '0';
            if (s[i-1] == 'B') b += static_cast<int>(s[i]) - '0';
        }
    }

    cout << (a > b ? 'A' : 'B');
}