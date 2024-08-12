#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;

        if (a)
        {
            if (a == 1) sum += 5000000;
            else if (a <= 3) sum += 3000000;
            else if (a <= 6) sum += 2000000;
            else if (a <= 10) sum += 500000;
            else if (a <= 15) sum += 300000;
            else if (a <= 21) sum += 100000;
        }
        if (b)
        {
            if (b == 1) sum += 5120000;
            else if (b <= 3) sum += 2560000;
            else if (b <= 7) sum += 1280000;
            else if (b <= 15) sum += 640000;
            else if (b <= 31) sum += 320000;
        }
        cout << sum << '\n';
    }
}
