#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        if (b - a == c - b && b - a != 0) cout << "AP " << c + c - b << '\n';
        else cout << "GP " << c * c / b << '\n';
    }
}
