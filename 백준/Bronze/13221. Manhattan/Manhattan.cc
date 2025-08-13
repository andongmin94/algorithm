#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, n, sum = 201; cin >> x >> y >> n;
    
    pair<int, int> p = make_pair(0, 0);
    while (n--)
    {
        int a, b; cin >> a >> b;
        if (abs(x - a) + abs(y - b) < sum)
        {
            sum = abs(x - a) + abs(y - b);
            p.first = a;
            p.second = b;
        }
    }
    cout << p.first << ' ' << p.second;
}
