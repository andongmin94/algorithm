#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    bool turn = true;
    while (a < 5 && b < 5)
    {
        if (turn) b += a;
        else a += b;
        turn = !turn;
    }
    if (a < b) cout << "yt";
    else cout << "yj";
}
