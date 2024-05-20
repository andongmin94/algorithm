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
        int a, b, c;
        cin >> a >> b >> c;
        cout << "Data set: " << a << ' ' << b << ' ' << c << '\n';
        while(c--)
        {
            if (a > b) a = a / 2;
            else b = b / 2;
        }
        cout << max(a, b) << ' ' << min(a, b) << "\n\n";
    }
}