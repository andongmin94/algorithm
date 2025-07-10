#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v;
        int sum, cnt, i;
        sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        cout << sum << ' ';
        sum = 0;
        cnt = n - 1;
        i = 1;
        sum += i;
        while (cnt--)
        {
            i += 2;
            sum += i;
        }
        cout << sum << ' ';
        sum = 0;
        cnt = n - 1;
        i = 2;
        sum += i;
        while (cnt--)
        {
            i += 2;
            sum += i;
        }
        cout << sum << '\n';
    }
}
