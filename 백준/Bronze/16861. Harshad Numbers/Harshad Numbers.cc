#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while (true)
    {
        int temp = n;
        int sum = 0;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (n % sum == 0)
        {
            cout << n;
            break;
        }
        n++;
    }
}
