#include <bits/stdc++.h>

using namespace std;

map<char, int> m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string one = "abdegopqADOPQR@";
    string two = "B";

    for (auto e : one)
        m.insert({e, 1});
    for (auto e : two)
        m.insert({e, 2});

    string s; getline(cin, s);
    int sum = 0;
    for (auto e : s)
        if (m[e]) sum += m[e];
    cout << sum;
}
