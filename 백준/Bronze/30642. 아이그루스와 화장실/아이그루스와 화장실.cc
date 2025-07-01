#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    string s;
    cin >> a >> s >> b;
    if (s == "annyong")
    {
        int res = 0;
        if (b % 2)
        {
            cout << b;
            return 0;
        }
        else res = b + 1;

        if (res > a) res -= 2;
        cout << res;
    }
    else
    {
        int res = 0;
        if (b % 2 == 0)
        {
            cout << b;
            return 0;
        }
        else res = b + 1;

        if (res > a) res -= 2;
        cout << res;
    }
}
