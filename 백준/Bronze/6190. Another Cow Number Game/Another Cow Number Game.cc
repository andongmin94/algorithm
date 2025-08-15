#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, cnt = 0 ; cin >> n;
    while (n != 1)
    {
        if (n % 2)
        {
            n *= 3;
            n++;
        }
        else
        {
            n /= 2;
        }
        cnt++;
    }
    cout << cnt;
}
