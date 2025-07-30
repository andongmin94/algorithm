#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p; cin >> p;
    while (p--)
    {
        int k, n; cin >> k >> n;

        cout << k << ' ';
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        
        cout << sum << ' ';
        sum = 0;
        int a = 1;
        for (int i = 1; i <= n; i++)
        {
            sum += a;
            a += 2;
        }
        cout << sum << ' ';
        sum = 0;
        a = 2;
        for (int i = 1; i <= n; i++)
        {
            sum += a;
            a += 2;
        }
        cout << sum << ' ';
        cout << '\n';
    }
}
