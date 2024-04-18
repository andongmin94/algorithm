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
        bool mack = false;
        bool zack = false;
        for (int i = 0; i < 10; i++)
        {
            int t;
            cin >> t;
            cout << t << ' ';
            if (t == 18) mack = true;
            if (t == 17) zack = true;
        }
        cout << '\n';

        if (mack && zack) cout << "both\n\n";
        else if (mack) cout << "mack\n\n";
        else if (zack) cout << "zack\n\n";
        else cout << "none\n\n";
    }
}
