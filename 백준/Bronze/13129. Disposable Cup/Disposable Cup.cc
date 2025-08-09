#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n; cin >> a >> b >> n;
    int sum = a * n + b;
    
    while (n--)
    {
        cout << sum << ' ';
        sum += b;
    }
}
