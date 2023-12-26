#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    int sum = a.length();
    for(auto e : a)
    {
        if (e == ':')
            sum++;
        else if (e == '_')
            sum += 5;
    }
    cout << sum << '\n';
}
