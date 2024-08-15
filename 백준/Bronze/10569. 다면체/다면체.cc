#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int v, e;
        cin >> v >> e;
        cout << 2 - v + e << '\n';
    }
}
