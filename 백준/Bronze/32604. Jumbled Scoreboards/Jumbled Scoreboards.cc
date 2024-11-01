#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    bool flag = false;
    int a, b;
    cin >> a >> b;
    n--;
    while(n--)
    {
        int c, d;
        cin >> c >> d;
        if (a > c || b > d) flag = true;
        a = c;
        b = d;
    }
    if (flag) cout << "no" << endl;
    else cout << "yes" << endl;
}