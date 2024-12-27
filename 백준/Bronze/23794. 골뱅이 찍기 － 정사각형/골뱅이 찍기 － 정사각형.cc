#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n + 2; i++) cout << '@';
    cout << '\n';
    
    int t = n;
    while(t--)
    {
        for (int i = 0; i < n + 2; i++)
        {
            if (i == 0 || i == n + 1) cout << '@';
            else cout << ' ';
        }
        cout << '\n';
    }
    
    for (int i = 0; i < n + 2; i++) cout << '@';
}