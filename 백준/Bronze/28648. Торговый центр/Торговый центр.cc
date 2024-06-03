#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, sum = 999999;
     cin >> n;
     while(n--)
     {
          int a, b;
          cin >> a >> b;

          if (sum > a + b) sum = a + b;
     }
     cout << sum;
}
