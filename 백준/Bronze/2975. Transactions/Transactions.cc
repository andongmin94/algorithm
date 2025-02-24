#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, c;
        char b;
        cin >> a >> b >> c;

        if (!a && b == 'W' && !c) break;

        if (b == 'W')
        {
            if (a - c < -200) cout << "Not allowed\n";
            else cout << a - c << '\n';
        }
        else cout << a + c << '\n';
    }
}
