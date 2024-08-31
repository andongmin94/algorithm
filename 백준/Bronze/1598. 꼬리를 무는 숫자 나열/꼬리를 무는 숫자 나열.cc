#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    int col_a = (a - 1) / 4;
    int row_a = (a - 1) % 4;
    int col_b = (b - 1) / 4;
    int row_b = (b - 1) % 4;

    int c = abs(col_a - col_b) + abs(row_a - row_b);

    cout << c << "\n";
}
