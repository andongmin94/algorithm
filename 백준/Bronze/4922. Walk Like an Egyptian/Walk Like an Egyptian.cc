#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int t; cin >> t;
        if (!t) break;
        cout << t << " => " << pow(t, 2) - t + 1 << '\n';
    }
}
