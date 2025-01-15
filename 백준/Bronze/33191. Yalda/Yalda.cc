#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int fee, a, b, c;
    cin >> fee >> a >> b >> c;
    if (a <= fee)
    {
        cout << "Watermelon";
        return 0;
    }
    if (b <= fee)
    {
        cout << "Pomegranates";
        return 0;
    }
    if (c <= fee)
    {
        cout << "Nuts";
        return 0;
    }
    cout << "Nothing";
}
