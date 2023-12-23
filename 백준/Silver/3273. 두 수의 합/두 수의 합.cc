#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<int> a(k);
    for (int& e : a)
        cin >> e;
    int x;
    cin >> x;
    vector<int> b(x);
    int sum = 0;
    for (int e : a)
    {
        if (x - e > 0 && b[x - e] == 1)
            sum++;
        else if (x - e > 0) b[e]++;
    }
    cout << sum << '\n';
}
