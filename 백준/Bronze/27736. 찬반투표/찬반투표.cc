#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m == 1) a++;
        if (m == -1) b++;
        if (!m) c++;
    }

    if (c >= (double)n / 2)
    {
        cout << "INVALID";
        return 0;
    }
    if (a > b) cout << "APPROVED";
    else cout << "REJECTED";
}
