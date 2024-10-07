#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b = 0;
    cin >> a;
    while(a--)
    {
        int c;
        cin >> c;
        if (c & 1) b++;
    }
    cout << b;
}