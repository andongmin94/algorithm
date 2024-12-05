#include <bits/stdc++.h>

using namespace std;

int fac(int pos_)
{
    if (pos_ <= 1) return 1;
    return pos_ * fac(pos_ - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while(true)
    {
        int n;
        cin >> n;
        if (!n) break;

        int sum = 0;
        int pos = 1;
        while(n > 0)
        {
            int m = n % 10;
            sum += m * fac(pos);
            n /= 10;
            pos++;
        }
        cout << sum << '\n';
    }
}