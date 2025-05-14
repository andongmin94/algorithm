#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int sum = 0;
    while (n--)
    {
        int a; cin >> a;
        sum += a;
    }
    if (sum % 3) cout << "no";
    else cout << "yes";
}
