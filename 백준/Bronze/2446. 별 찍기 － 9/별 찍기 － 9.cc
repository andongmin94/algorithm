#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 0; i < a * 2 - 1; i++)
    {
        if (i < a)
        {
            for (int j = 0; j < i; j++)
                cout << " ";

            for (int j = 0; j < (a - i) * 2 - 1; j++)
                cout << "*";
        }
        else
        {
            for (int j = 1; j < a * 2 - i - 1; j++)
                cout << " ";

            for (int j = 0; j < (i - a + 1) * 2 + 1; j++)
                cout << "*";
        }
        cout << '\n';
    }
}
