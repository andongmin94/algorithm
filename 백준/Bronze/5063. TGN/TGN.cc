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
        int r, e, c;
        cin>> r >> e >> c;
        if (e - c > r) cout << "advertise" << '\n';
        if (e - c == r) cout << "does not matter" << '\n';
        if (e - c < r) cout << "do not advertise" << '\n';
    }
}
