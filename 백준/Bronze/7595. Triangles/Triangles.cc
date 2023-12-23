#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int a;
        cin >> a;
        if (a != 0)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j <= i; j++)
                    cout << "*";
                cout << '\n';
            }
        }
        else break;
    }
}
