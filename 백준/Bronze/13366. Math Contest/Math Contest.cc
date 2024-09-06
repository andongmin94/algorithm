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
        string s;
        cin >> s;
        
        int sum = 0;

        for (const auto& e : s)
            sum += e - '0';

        if (sum % 9) cout << "NO\n";
        else cout << "YES\n";
    }
}
