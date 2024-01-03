#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;;
    if (wc - ws >= 2 && hc - hs >= 2)
        cout << 1 << '\n';
    else cout << 0 << '\n';
}
