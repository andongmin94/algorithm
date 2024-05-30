#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     string k;
     int a = 0, b = 0;
     cin >> n >> k;

     for (auto e : k)
     {
          if (static_cast<int>(e - '0') % 2 != 0) a++;
          else b++;
     }
     if (a > b) cout << 1;
     else if (a < b) cout << 0;
     else cout << -1;
}