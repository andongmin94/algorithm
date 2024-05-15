#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    if(min(a, b) >= c * 2 && max(a, b) <= min(a, b) * 2)
        cout << "good";
    else cout << "bad";
    
}