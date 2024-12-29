#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    bool anj = false;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "anj") anj = true;
    }
    if (anj) cout << "뭐야;";
    else cout << "뭐야?";
}
