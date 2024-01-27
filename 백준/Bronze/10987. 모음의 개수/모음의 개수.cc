#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int sum = 0;
    for (auto e : s)
        if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
            sum++;
    cout << sum;
}
