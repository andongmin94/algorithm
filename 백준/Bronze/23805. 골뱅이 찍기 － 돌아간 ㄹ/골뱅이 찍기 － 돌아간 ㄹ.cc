#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < n * 3; j++)
           cout << '@';
       for (int j = 0; j < n; j++)
           cout << ' ';
       for (int j = 0; j < n; j++)
           cout << '@';
       
       cout << '\n';
   }

    for (int i = 0; i < n * 3; i++)
    {
        for (int j = 0; j < n; j++)
            cout << '@';
        for (int j = 0; j < n; j++)
            cout << ' ';
        for (int j = 0; j < n; j++)
            cout << '@';
        for (int j = 0; j < n; j++)
            cout << ' ';
        for (int j = 0; j < n; j++)
            cout << '@';
       
        cout << '\n';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << '@';
        for (int j = 0; j < n; j++)
            cout << ' ';
        for (int j = 0; j < n * 3; j++)
            cout << '@';
       
        cout << '\n';
    }
}
