#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    int z = 0, o = 0;
    cin >> n >> k;
    while(n--)
    {
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == '0') z++;
            if (e == '1') o++;
        }
    }
    cout << min(z, o);
}
