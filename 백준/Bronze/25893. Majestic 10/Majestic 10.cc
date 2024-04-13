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
        int a, cnt = 0, t = 3;
        while(t--)
        {
            cin >> a;
            cout << a << ' ';
            if (t == 0) cout << '\n';
            if (a >= 10) cnt++;
        }

        if (cnt == 0) cout << "zilch\n\n";
        if (cnt == 1) cout << "double\n\n";
        if (cnt == 2) cout << "double-double\n\n";
        if (cnt == 3) cout << "triple-double\n\n";
    }
}
