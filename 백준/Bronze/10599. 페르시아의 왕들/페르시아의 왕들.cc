#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c,d;
    while(true)
    {
        cin >> a >> b >> c >> d;
        if (!a && !b && !c && !d) break;
        cout << c - b << ' ' << d - a << '\n';
    }
}