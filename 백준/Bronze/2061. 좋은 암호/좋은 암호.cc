#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string k;
    int l;
    cin >> k >> l;
    
    for (int i = 2; i < l; i++)
    {
        int ans = 0, temp = 1;
        for (int j = k.length() - 1; j >= 0; j--)
        {
            ans = (ans + (k[j] - '0') * temp) % i;
            temp *= 10;
            temp %= i;
        }
        if (!ans)
        {
            cout << "BAD " << i;
            return 0;
        }
    }
    cout << "GOOD";
}