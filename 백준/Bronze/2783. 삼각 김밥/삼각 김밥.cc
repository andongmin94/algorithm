#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a, b;
    int c;
    cin >> a >> b >> c;

    double sum = 1000 / b * a;
    while(c--)
    {
        double a2, b2;
        cin >> a2 >> b2;
        double sum2 = 1000 / b2 * a2;
        if (sum2 < sum) sum = sum2;
    }
    cout << fixed << setprecision(2) << sum;
}
