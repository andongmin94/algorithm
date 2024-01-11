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
        int r, c;
        cin >> r >> c;
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < r; k++)
                cout << "X";
            cout << '\n';
        }
        cout << '\n';
    }
}
