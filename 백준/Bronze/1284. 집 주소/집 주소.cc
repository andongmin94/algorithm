#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int n;
        cin >> n;
        if (!n) break;
        string s = to_string(n);
        int sum = s.length() + 1;
        for (const auto& e : s)
        {
            if (e == '1') sum += 2;
            else if (e == '0') sum += 4;
            else sum += 3;
        }
        cout << sum << '\n';
    }
}
