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
        int t_;
        cin >> t_;
        int sum = 0;
        while (t_--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            sum += max(0, max(a, max(b, c)));
        }
        cout << sum << '\n';
    }
}
 