#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        bitset<16> k(a);
        string s = k.to_string();
        int cnt = 0;
        for (auto e : s)
            if (e == '1') cnt++;
        if (cnt % 2 == b) cout << "Valid\n";
        else cout << "Corrupt\n";
    }
}
