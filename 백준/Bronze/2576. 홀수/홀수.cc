#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 7;
    int val = 0;
    int minimum = 100;
    while(n--)
    {
        int p;
        cin >> p;

        if (p % 2 != 0)
        {
            val += p;
            minimum = min(minimum, p);
        }
    }
    
    if (!val) cout << -1;
    else cout << val << '\n' << minimum;
}