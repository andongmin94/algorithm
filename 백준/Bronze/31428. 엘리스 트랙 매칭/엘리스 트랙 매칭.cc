#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = -1;
    cin >> n;
    vector<char> v(n + 1);

    for(int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }

    for (auto e : v)
    {
        if (e == v[n]) sum++;
    }
    cout << sum;
}
