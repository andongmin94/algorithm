#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 1;
    while(1)
    {
        int n;
        cin >> n;
        if (n)
        {
            n *= 3;
            if (n % 2)
            {
                cout << cnt++ << ". odd ";
                n += 1;
                n /= 2;
            }
            else
            {
                cout << cnt++ << ". even ";
                n /= 2;
            }
            n *= 3;
            n /= 9;
            cout << n << '\n';
        }
        else break;
    }
}
