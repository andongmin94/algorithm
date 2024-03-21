#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << 4 + max(w1, w2) * 2 + (h1 + h2) * 2;
}
