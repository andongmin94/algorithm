#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char q, w;
    cin >> a >> q >> b >> w >> c;
    
    int sum = a;
    if (q == '+') sum += b; 
    if (q == '-') sum -= b; 
    if (q == '*') sum *= b; 
    if (q == '/')
    {
        if (sum < 0 || b < 0)
        {
            sum /= (b * -1);
            sum *= -1;
        }
        else sum /= b;
    }
    if (w == '+') sum += c;
    if (w == '-') sum -= c;
    if (w == '*') sum *= c;
    if (w == '/')
    {
        if (sum < 0 || c < 0)
        {
            sum /= (c * -1);
            sum *= -1;
        }
        else sum /= c;
    }
    int sum2 = b;
    if (w == '+') sum2 += c;
    if (w == '-') sum2 -= c;
    if (w == '*') sum2 *= c;
    if (w == '/')
    {
        if (sum2 < 0 || c < 0)
            sum2 /= (c * -1);
        else sum2 /= c;
    }
    if (q == '+') sum2 = a + sum2;
    if (q == '-') sum2 = a - sum2;
    if (q == '*') sum2 = a * sum2;
    if (q == '/')
    {
        if (sum2 < 0)
        {
            sum2 = a / (sum2 * -1);
            sum2 *= -1;
        }
        else sum2 = a / sum2;
    };
    cout << min(sum, sum2) << '\n' << max(sum, sum2);
}

