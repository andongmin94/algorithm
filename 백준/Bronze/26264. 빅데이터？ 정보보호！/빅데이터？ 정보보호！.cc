#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    int b = 0, se = 0;
    for (auto e : s)
    {
        if (e == 'b') b++;
        if (e == 's') se++;
    }

    if (b > se) cout << "bigdata?";
    else if (b < se) cout << "security!";
    else cout << "bigdata? security!";
}
