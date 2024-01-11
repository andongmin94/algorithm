#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        if (j % 2 != 0)
            cout << j << " is odd" << '\n';
        else cout << j << " is even" << '\n';
    }
}