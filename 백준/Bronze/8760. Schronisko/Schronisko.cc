#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Z;
    cin >> Z;
    for (int i = 0; i < Z; i++)
    {
        int w, k;
        cin >> w >> k;

        cout << (w * k) / 2 << '\n';
    }
}