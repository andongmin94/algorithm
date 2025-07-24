#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d; cin >> n >> d;

    while (n--)
    {
        string s; cin >> s;

        for (auto e : s)
        {
            if (d == 1)
            {
                if (e == 'd') cout << 'q';
                if (e == 'b') cout << 'p';
                if (e == 'q') cout << 'd';
                if (e == 'p') cout << 'b';
            }
            else
            {
                if (e == 'd') cout << 'b';
                if (e == 'b') cout << 'd';
                if (e == 'q') cout << 'p';
                if (e == 'p') cout << 'q';                
            }
        }
        cout << '\n';
    }
}
