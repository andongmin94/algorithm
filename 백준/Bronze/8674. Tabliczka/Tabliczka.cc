#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0)
        cout << 0;
    else
    {
        if (a < b)
            swap(a, b);
        cout << a * b - (a / 2) * b * 2;
    }
}
