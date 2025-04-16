#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; ++i)
    {
        string s;
        getline(cin, s);

        int a, b, c;
        char op, eq;

        stringstream ss(s);
        ss >> a >> op >> b >> eq >> c;

        cout << "Case " << i << ": ";
        if (op == '+' && a + b == c)
            cout << "YES\n";
        else if (op == '-' && a - b == c)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}
