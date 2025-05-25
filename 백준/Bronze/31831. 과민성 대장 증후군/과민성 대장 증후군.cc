#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, sum = 0, cnt = 0; cin >> n >> m;

    while (n--)
    {
        int temp; cin >> temp;
        sum += temp;
        sum = sum < 0 ? 0 : sum;
        if (sum >= m) cnt++;
    }
    cout << cnt;
}
