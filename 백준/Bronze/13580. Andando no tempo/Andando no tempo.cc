#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || a == c || b == c)
        cout << "S";
    else if (a + b == c || a + c == b || b + c == a)
        cout << "S";
    else cout << "N";
}