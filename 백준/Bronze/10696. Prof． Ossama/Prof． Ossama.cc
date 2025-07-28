#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        int div;
        cin >> s >> div;

        long long r = 0;
        for (int j = 0; j < s.length(); j++)
        {
            int digit = s[j] - '0';
            r = (r * 10 + digit) % div;
        }
        cout << "Case " << i << ": " << r << '\n';
    }
}
