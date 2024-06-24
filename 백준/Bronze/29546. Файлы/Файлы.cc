#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i];

    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        int z, x;
        cin >> z >> x;

        for (int j = z - 1; j < x; j++)
            cout << s[j] << '\n';
    }
}
