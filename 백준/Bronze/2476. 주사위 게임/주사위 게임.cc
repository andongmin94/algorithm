#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sum = 0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = 0;
        if (a == b && b == c)
        {
            d += 10000;
            d += a * 1000;
        }
        else if (a == b || a == c || b == c)
        {
            d += 1000;
            if (a == b) d += a * 100;
            else if (a == c) d += a * 100;
            else if (b == c) d += b * 100;
        }
        else if (a != b && a != c && b != c)
        {
            d += max(a, max(b, c)) * 100;
        }
        if (sum < d) sum = d;
    }
    cout << sum;
}
