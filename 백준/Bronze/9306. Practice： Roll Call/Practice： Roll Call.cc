#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b; cin >> a >> b;
        cout << "Case " << i + 1 << ": " << b << ", " << a << '\n';
    }
}
