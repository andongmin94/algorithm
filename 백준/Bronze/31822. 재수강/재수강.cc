#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n, cnt = 0;
    cin >> n;
    
    while(n--)
    {
        string s2;
        cin >> s2;
        int same = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] != s2[i]) break;
            same++;
        }
        if (same == 5) cnt++;
    }
    cout << cnt;
}