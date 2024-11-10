#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if (a / b == static_cast<double>(a) / b)
            cout << a / b;
        else cout << a / b + 1;
        cout << '\n';
    }
}