#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        cout << a / b << ' ' << a % b << " / " << b << '\n';
    }
}
