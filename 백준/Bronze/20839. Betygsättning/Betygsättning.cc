#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, x2, y2, z2;
    cin >> x >> y >> z >> x2 >> y2 >> z2;

    if (x2 == x && y2 == y && z2 == z) cout << 'A';
    else if (x2 >= (x + 1) / 2 && y2 == y && z2 == z) cout << 'B';
    else if (y2 == y && z2 == z) cout << 'C';
    else if (y2 >= (y + 1) / 2 && z2 == z) cout << 'D';
    else if (z2 == z) cout << 'E';
}