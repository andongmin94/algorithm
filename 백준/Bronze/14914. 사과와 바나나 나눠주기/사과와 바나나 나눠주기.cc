#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 1; cin >> a >> b;

    while (cnt != min(a,b) + 1)
    {
        if (a % cnt == 0 && b % cnt == 0)
            cout << cnt << ' ' << a / cnt << ' ' << b / cnt << '\n';
        cnt++;
    }
}
