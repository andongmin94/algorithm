#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a * b; i++)
    {
        cout << i;
        if (i % b == 0) cout << '\n';
        else cout << ' ';
    }
}