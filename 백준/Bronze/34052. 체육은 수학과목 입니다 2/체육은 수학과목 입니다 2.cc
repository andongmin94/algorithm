#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1500;
    int a;
    
    cin >> a;
    t -= a;
    cin >> a;
    t -= a;
    cin >> a;
    t -= a;
    cin >> a;
    t -= a;
    
    if (t >= 0) cout << "Yes";
    else cout << "No";
}
