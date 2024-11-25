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
        double a;
        string b;
        cin >> a >> b;
        if (b == "kg") cout << fixed << setprecision(4) << a * 2.2046 << ' ' << "lb" << '\n';
        if (b == "l") cout << fixed << setprecision(4) << a * 0.2642 << ' ' << "g" << '\n';
        if (b == "lb") cout << fixed << setprecision(4) << a * 0.4536 << ' ' << "kg" << '\n';
        if (b == "g") cout << fixed << setprecision(4) << a * 3.7854 << ' ' << "l" << '\n';
    }
}
