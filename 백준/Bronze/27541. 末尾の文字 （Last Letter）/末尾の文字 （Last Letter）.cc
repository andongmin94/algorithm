#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    if (s[n - 1] == 'G')
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << s[i];
        }
    }
    else
    {
        for (auto e : s)
        {
            cout << e;
        }
        cout << 'G';
    }
}
