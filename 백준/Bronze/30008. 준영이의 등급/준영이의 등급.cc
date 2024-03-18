#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    while(k--)
    {
        double g;
        cin >> g;
        if (static_cast<int>(g / n * 100) <= 4) cout << "1 ";
        else if (static_cast<int>(g / n * 100) <= 11) cout << "2 ";
        else if (static_cast<int>(g / n * 100) <= 23) cout << "3 ";
        else if (static_cast<int>(g / n * 100) <= 40) cout << "4 ";
        else if (static_cast<int>(g / n * 100) <= 60) cout << "5 ";
        else if (static_cast<int>(g / n * 100) <= 77) cout << "6 ";
        else if (static_cast<int>(g / n * 100) <= 89) cout << "7 ";
        else if (static_cast<int>(g / n * 100) <= 96) cout << "8 ";
        else if (static_cast<int>(g / n * 100) <= 100) cout << "9 ";
    }
}