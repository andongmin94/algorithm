#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int m, sum = 0;
        cin >> m;

        for (int i = 1; i <= m; i += 2)
            sum += i;
        cout << sum << '\n';
    }
}
