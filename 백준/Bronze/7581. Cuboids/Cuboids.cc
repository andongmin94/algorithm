#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int l, w, h, v;
        cin >> l >> w >> h >> v;
        if (l == 0 && w == 0 && h == 0 && v == 0) break;
        if (l == 0) l = v / w / h;
        if (w == 0) w = v / l / h;
        if (h == 0) h = v / l / w;
        if (v == 0) v = l * w * h;
        cout << l << " " << w << " " << h << " " << v << '\n';
    }
}
