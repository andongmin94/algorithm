#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int a = 0, b = 0;

    for (const auto& e : s)
    {
        if (e == 'A') a++;
        else b++;
    }

    if (a > b) cout << 'A';
    else if (a < b) cout << 'B';
    else cout << "Tie";
}
