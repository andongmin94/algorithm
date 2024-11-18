#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    bool k = true;
    if (a != 1 && a != 3) k = false;
    if (b != 6 && b != 8) k = false;
    if (c != 2 && c != 5) k = false;
    if (k) cout << "JAH";
    else cout << "EI";
}