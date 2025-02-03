#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, sum = 1;
    cin >> a >> b >> c;
    vector<int> v;
    if (a % 2) v.push_back(a);
    if (b % 2) v.push_back(b);
    if (c % 2) v.push_back(c);

    if (!v.empty())
    {
        for (auto e : v)
            sum *= e;
    }
    else
    {
        sum = a * b * c;
    }
    cout << sum;
}
