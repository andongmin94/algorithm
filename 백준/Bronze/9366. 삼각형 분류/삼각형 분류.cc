#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << "Case #" << i << ": ";

        if (a + b <= c || b + c <= a || c + a <= b)
        {
            cout << "invalid!";
        }
        else if (a == b && b == c)
        {
            cout << "equilateral";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "isosceles";
        }
        else
        {
            cout << "scalene";
        }

        cout << '\n';
    }
}