#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, s, t;
    cin >> n >> a >> b;
    cin >> s >> t;

    bool s_in_city = (s > a && s < b);
    bool t_in_city = (t > a && t < b);

    bool s_in_area1 = (s >= 1 && s <= a);
    bool t_in_area1 = (t >= 1 && t <= a);

    bool s_in_area2 = (s >= b && s <= n);
    bool t_in_area2 = (t >= b && t <= n);

    if (s_in_city && t_in_city) cout << "City";
    else if ((s_in_area1 && t_in_area1) || (s_in_area2 && t_in_area2)) cout << "Outside";
    else cout << "Full";
}
