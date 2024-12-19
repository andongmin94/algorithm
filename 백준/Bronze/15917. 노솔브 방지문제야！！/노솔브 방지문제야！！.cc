#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long a;
        cin >> a;

        long long k = 1;
        while (true)
        {
            if (k == a)
            {
                cout << 1 << '\n';
                break;
            }
            if (k > a)
            {
                cout << 0 << '\n'; break;
            }
            k *= 2;
        }
    }
}
