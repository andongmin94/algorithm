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
        s[0] = toupper(s[0]);
        cout << s << '\n';
    }
}
