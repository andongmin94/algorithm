#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;

    cin >> a >> b;

    if (a > b)
        swap(a, b);

    if (b - a > 1)
    {
        cout << b - a - 1 << '\n';
        for (long long i = a + 1; i < b; i++)
        {
            cout << i << " ";
        }
    }
    else
        cout << 0 << '\n';
}
