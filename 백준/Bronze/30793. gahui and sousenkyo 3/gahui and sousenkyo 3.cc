#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     double x, y;
     cin >> x >> y;

     if (x / y < 0.2) cout << "weak";
     else if (x / y < 0.4) cout << "normal";
     else if (x / y < 0.6) cout << "strong";
     else cout << "very strong";
}