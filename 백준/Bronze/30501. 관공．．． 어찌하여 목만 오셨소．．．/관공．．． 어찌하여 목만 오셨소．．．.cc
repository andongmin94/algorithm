#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;

        for (auto e : s)
            if (e == 'S') goto stop;
    }
    stop: cout << s;
}
