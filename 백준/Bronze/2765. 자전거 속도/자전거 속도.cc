#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159265358979;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    while (true)
    {
        cnt++;
        double a, b, c;
        cin >> a >> b >> c;
        a *= pi;
        if (!b) break;

        cout << "Trip #" << cnt << ": ";
        cout << fixed << setprecision(2);
        cout << a * b / 63360 << ' ';
        cout << a * b / 63360 / c * 3600; 
        cout << '\n';
    }
}
