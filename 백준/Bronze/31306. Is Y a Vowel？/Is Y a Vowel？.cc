#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, m = 0;
    string s;
    cin >> s;

    for (auto e : s)
    {
        if (e == 'a')
        {
            n++;
            m++;
        }
        if (e == 'e')
        {
            n++;
            m++;
        }
        if (e == 'i')
        {
            n++;
            m++;
        }
        if (e == 'o')
        {
            n++;
            m++;
        }
        if (e == 'u')
        {
            n++;
            m++;
        }
        if (e == 'y') m++;
    }

    cout << n << ' ' << m;
}