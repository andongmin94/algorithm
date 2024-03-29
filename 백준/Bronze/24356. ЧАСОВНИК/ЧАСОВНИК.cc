#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;

    if (m1 > m2) t2--;
    
    int t = t1 < t2 ? t2 - t1 : 24 - t1 + t2;
    
    if (t != 24) t *= 60;
    else t = 0;
    
    int m = m1 < m2 ? m2 - m1 : 60 - m1 + m2;
    if (m == 60) m = 0;

    cout << t + m << ' ' << (t + m) / 30;
}