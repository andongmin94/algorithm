#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    int a = 0, b = 0, c = 0, d = 0;
    
    for (auto e : s)
    {
        if (e == 'N') a++;
        if (e == 'S') b++;
        if (e == 'E') c++;
        if (e == 'W') d++;
    }
    
    if (a - b >= 0) cnt += (a - b);
    else cnt += (b - a);
    
    if (c - d >= 0) cnt += (c - d);
    else cnt += (d - c);

    cout << cnt;
}
