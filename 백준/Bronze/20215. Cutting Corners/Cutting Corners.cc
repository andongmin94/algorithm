#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double w, h;
    cin >> w >> h;

    cout << fixed << setprecision(9);
    cout << max(sqrt(w * w + h * h), w + h) - min(sqrt(w * w + h * h), w + h);
}
