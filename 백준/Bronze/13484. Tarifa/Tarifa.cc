#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, sum = 0; cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        sum += x;
        int temp; cin >> temp;
        sum -= temp;
    }
    cout << sum + x;
}
