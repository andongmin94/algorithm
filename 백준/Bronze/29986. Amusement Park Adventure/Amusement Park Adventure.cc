#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b, cnt = 0;
     cin >> a >> b;
     while(a--)
     {
          int c;
          cin >> c;
          if (b >= c) cnt++;
     }
     cout << cnt;
}
