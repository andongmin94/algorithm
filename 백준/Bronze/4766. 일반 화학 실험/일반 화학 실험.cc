#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d;
    cin >> d;
    while(true)
    {
        double n;
        cin >> n;
        if (n == 999) break;
        else
        {
            cout << fixed << setprecision(2);
            cout << n - d << '\n';
        }
        d = n;
    }
}
