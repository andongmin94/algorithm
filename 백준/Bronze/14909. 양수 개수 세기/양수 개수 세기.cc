#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin, s);
    int cnt = 0;
    bool minus = false;
    int number = 0;
    for (auto e : s)
    {
        if (e == '-') minus = true;
        if (e == ' ')
        {
            if (number && !minus) cnt++;
            minus = false;
            number = 0;
        }
        if (isdigit(e))
        {
            number *= 10;
            number += e - '0';
        }
    }
    if (number && !minus) cnt++;
    cout << cnt;
}