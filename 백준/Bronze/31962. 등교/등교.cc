#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, max = 0;
    cin >> n >> a;

    while(n--)
    {
        int b, c;
        cin >> b >> c;
        if (b + c <= a && max < b)
            max = b;
    }
    if (max == 0) cout << -1;
    else cout << max;
}
