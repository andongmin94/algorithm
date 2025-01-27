#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    
    while (n >= 10)
    {
        int sum = 1;
        while (n > 0)
        {
            sum *= (n % 10);
            n /= 10;
        }
        n = sum;
        cnt++;
    }
    cout << cnt;
}
