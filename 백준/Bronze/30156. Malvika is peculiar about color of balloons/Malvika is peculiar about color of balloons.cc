#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--)
    {
        int a = 0, b = 0;
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == 'a' ) a++;
            else b++;
        }
        cout << min(a, b) << '\n';
    }
}
