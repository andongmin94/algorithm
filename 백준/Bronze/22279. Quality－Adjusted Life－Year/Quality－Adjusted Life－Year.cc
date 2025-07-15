#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    double a = 0;
    
    while (n--)
    {
        double b, c;
        cin >> b >> c;
        a += b * c;
    }
    cout << fixed << setprecision(3) << a;
}
