#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s,a,b;

    cin >> s >> a >> b;

    int cnt = 0;
    while(a < s)
    {
        a += b;
        cnt++;
    }
    cout << 250 + cnt * 100;
}