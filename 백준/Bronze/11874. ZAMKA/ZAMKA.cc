#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, d, x; cin >> l >> d >> x;

    for (int i = l; i <= d; i++)
    {
        int sum = 0;
        int t = i;
        while (t > 0)
        {
            sum += t % 10;
            t /= 10;
        }
        if (sum == x)
        {
            cout << i << '\n';
            break;
        }
    }
    for (int i = d; i >= l; i--)
    {
        int sum = 0;
        int t = i;
        while (t > 0)
        {
            sum += t % 10;
            t /= 10;
        }
        if (sum == x)
        {
            cout << i << '\n';
            break;
        }
    }
    
}
