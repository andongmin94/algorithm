#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        switch (x)
        {
        case 136: sum += 1000; break;
        case 142: sum += 5000; break;
        case 148: sum += 10000; break;
        case 154: sum += 50000; break;
        default: break;
        }
    }
    cout << sum;
}
