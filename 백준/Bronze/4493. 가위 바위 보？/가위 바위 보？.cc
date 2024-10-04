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
        int m;
        cin >> m;

        int q = 0, w = 0;
        while(m--)
        {
            char a, b;
            cin >> a >> b;

            if (a == 'R')
            {
                if (b == 'R') continue;
                if (b == 'P') w++;
                if (b == 'S') q++;
            }
            if (a == 'P')
            {
                if (b == 'R') q++;
                if (b == 'P') continue;
                if (b == 'S') w++;
            }
            if (a == 'S')
            {
                if (b == 'R') w++;
                if (b == 'P') q++;
                if (b == 'S') continue;
            }
        }
        if (q > w) cout << "Player 1\n";
        if (q < w) cout << "Player 2\n";
        if (q == w) cout << "TIE\n";
    }
}
