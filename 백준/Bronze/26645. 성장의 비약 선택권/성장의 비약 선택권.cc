#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (n < 206) cout << 1;
    else if (n < 218) cout << 2;
    else if (n < 229) cout << 3;
    else cout << 4;
}
