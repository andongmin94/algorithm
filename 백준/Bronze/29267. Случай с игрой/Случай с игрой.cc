#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b, c = 0, cur = 0;
     cin >> a >> b;

     while(a--)
     {
          string s;
          cin >> s;
          if (s == "ammo")
          {
               cur += b;
               cout << cur << '\n';
          }
          if (s == "load")
          {
               cur = c;
               cout << cur << '\n';
          }
          if (s == "shoot")
          {
               cout << --cur << '\n';
          }
          if (s == "save")
          {
               c = cur;
               cout << cur << '\n';
          }
     }
}