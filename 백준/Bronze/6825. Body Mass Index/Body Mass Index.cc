#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double i, j;
    cin >> i >> j;
    if (i / (j * j) >= 25)
        cout << "Overweight";
    else if (i / (j * j) >= 18.5 && i / (j * j) < 25)
        cout << "Normal weight";
    else cout << "Underweight";
}
