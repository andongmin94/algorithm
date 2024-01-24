#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        sum += b;
        if (i != a - 1)
            sum += 8;
    }
    cout << sum / 24 << " " << sum % 24;
}