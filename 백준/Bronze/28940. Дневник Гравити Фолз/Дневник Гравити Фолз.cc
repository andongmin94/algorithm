#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int w, h;
    cin >> w >> h;
    
    int n, a, b;
    cin >> n >> a >> b;

    const int k = (w / a) * (h / b);

    if (k != 0)
        cout << ceil(static_cast<double>(n) / k) << '\n';
    else cout << -1 << '\n';
}
