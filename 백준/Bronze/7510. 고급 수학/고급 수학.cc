#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Scenario #" << i << ":\n";
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v(3);
        v[0] = a;
        v[1] = b;
        v[2] = c;

        sort(v.begin(), v.end());

        if (pow(v[0], 2) + pow(v[1], 2) == pow(v[2], 2))
            cout << "yes\n\n";
        else cout << "no\n\n";
    }
}
