#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    if (a % 8 == 1) cout << 'a';
    if (a % 8 == 2) cout << 'b';
    if (a % 8 == 3) cout << 'c';
    if (a % 8 == 4) cout << 'd';
    if (a % 8 == 5) cout << 'e';
    if (a % 8 == 6) cout << 'f';
    if (a % 8 == 7) cout << 'g';
    if (a % 8 == 0) cout << 'h';

    if ((a-1) / 8 == 0) cout << 1;
    if ((a-1) / 8 == 1) cout << 2;
    if ((a-1) / 8 == 2) cout << 3;
    if ((a-1) / 8 == 3) cout << 4;
    if ((a-1) / 8 == 4) cout << 5;
    if ((a-1) / 8 == 5) cout << 6;
    if ((a-1) / 8 == 6) cout << 7;
    if ((a-1) / 8 == 7) cout << 8;
}