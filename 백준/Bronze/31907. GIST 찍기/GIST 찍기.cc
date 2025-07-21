#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string a = "G...", b = ".I.T", c = "..S.";

    for (int i = 0; i < n; i++)
    {
        for (auto e : a)
        {
            for (int j = 0; j < n; j++)
                cout << e;
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (auto e : b)
        {
            for (int j = 0; j < n; j++)
                cout << e;
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (auto e : c)
        {
            for (int j = 0; j < n; j++)
                cout << e;
        }
        cout << '\n';
    }
}
