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
        
        for (int i = 0; i < m && m != 1; i++)
            cout << '#';
        if (m != 1) cout << '\n';

        int mid = m - 2;
        if (mid < 0) mid = 0;
        while(mid--)
        {
            for (int i = 0; i < m; i++)
            {
                if (i == 0 || i == m - 1) cout << '#';
                else cout << 'J';
            }
            cout << '\n';
        }
        
        for (int i = 0; i < m; i++)
            cout << '#';
        if (n) cout << "\n\n";
    }
}
