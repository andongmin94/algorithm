#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, sum = 0;
    cin >> n >> k;

    while(n--)
    {
        int a;
        cin >> a;
        sum += a / k;
    }
    cout << sum;
}
