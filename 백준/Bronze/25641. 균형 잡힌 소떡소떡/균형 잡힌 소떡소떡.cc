#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 's') a++;
            else b++;
        }
        if (a == b)
        {
            for (int j = i; j < n; j++)
                cout << s[j];
            break;
        }
    }
}
