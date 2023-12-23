#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 1; i < a * 2; i++)
    {
        if (i <= a)
        {
            for (int j = 0; j < i; j++)
                cout << "*";

            for (int j = 0; j < (a - i) * 2; j++)
                cout << " ";

            for (int j = 0; j < i; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < a * 2 - i; j++)
                cout << "*";

            for (int j = 0; j < (i - a) * 2; j++)
                cout << " ";

            for (int j = 0; j < a * 2 - i; j++)
                cout << "*";
        }
        cout << '\n';
    }
}
