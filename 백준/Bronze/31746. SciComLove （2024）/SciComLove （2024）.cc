#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "SciComLove";
    string rs = "evoLmoCicS";

    int cnt;
    cin >> cnt;

    if (cnt % 2 == 0) cout << s;
    else cout << rs;
}