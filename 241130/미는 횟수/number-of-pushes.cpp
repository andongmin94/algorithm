#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string a, b;
     cin >> a >> b;
     int cnt = 0, k = 102;

     while(--k > 0)
     {
          if (a == b) break;
          a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
          cnt++;
     }
     if (k) cout << cnt;
     else cout << -1;
}