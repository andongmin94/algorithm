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
        int a, b;
        cin >> a >> b;
        if (a >= 2 && b >= 2 || a > 2 || b > 2) cout << "No\n";
        else cout << "Yes\n";
    }
}
