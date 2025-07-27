#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long l;
        cin >> l;
        cout << l * (l + 1) * (2 * l + 1) / 6 << "\n";
    }
}
