#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
            cout << " ";

        for (int j = 0; j < i * 2 + 1; j++)
            cout << "*";
        cout << '\n';
    }
}
