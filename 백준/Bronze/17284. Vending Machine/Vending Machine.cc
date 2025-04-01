#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int sum = 5000;
    for (auto e : s)
    {
        if (e == '1') sum -= 500;
        if (e == '2') sum -= 800;
        if (e == '3') sum -= 1000;
    }
    cout << sum;
}

