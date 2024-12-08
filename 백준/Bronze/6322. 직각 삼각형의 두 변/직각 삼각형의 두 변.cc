#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tries = 0;
    while (true)
    {
        tries++;
        int a, b, c;
        cin >> a >> b >> c;
        if (!a && !b && !c) break;
        cout << "Triangle #" << tries << '\n';
        map<string, int> m = {
            {"a", a},
            {"b", b},
            {"c", c}
        };
        double s = 0;
        //
        if (c == -1)
        {
            s = sqrt(a * a + b * b);
        }
        else if (b == -1)
        {
            if (a * a + 1 <= c * c)
                s = sqrt(c * c - a * a);
        }
        else if (a == -1)
        {
            if (b * b + 1 <= c * c)
                s = sqrt(c * c - b * b);
        }
        //
        for (auto e : m)
            if (s && e.second == -1) cout << e.first;
        if (s) cout << " = " << fixed << setprecision(3) << s << "\n\n";
        else cout << "Impossible.\n\n";
    }
}
