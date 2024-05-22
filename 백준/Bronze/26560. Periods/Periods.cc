#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    
    while(n--)
    {
        string s;
        getline(cin, s);
        cout << s;
        if (s[s.length()-1] != '.') cout << '.';
        cout << '\n';
    }
}