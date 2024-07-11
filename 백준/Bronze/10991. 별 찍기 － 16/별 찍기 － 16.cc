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
        for (int j = i; j < n - 1; j++)
            cout << ' ';
        for (int j = 0; j < i * 2 + 1; j++)
        {
            if (j % 2 == 0) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
}
