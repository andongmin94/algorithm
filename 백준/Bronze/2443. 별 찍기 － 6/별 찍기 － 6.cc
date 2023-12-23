#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < a - i; j++)
            cout << " ";

        for (int j = 0; j < i * 2 - 1; j++)
            cout << "*";
        cout << '\n';
    }
}
