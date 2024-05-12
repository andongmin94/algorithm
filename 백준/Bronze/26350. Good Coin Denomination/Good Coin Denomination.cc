#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int d;
        cin >> d;
        vector<int> v(d);
        cout << "Denominations: ";
        bool property = true;
        for (int i = 0; i < d; i++)
        {
            cin >> v[i];
            cout << v[i] << ' ';
            if (i == 0) continue;
            if (i > 0 && v[i-1] * 2 <= v[i]) continue;
            property = false;
        }
        cout << '\n';
        if (property) cout << "Good coin denominations!\n\n";
        else cout << "Bad coin denominations!\n\n";
    }
}