#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, s, g;
    cin >> m >> s >> g;

    double a, b;
    cin >> a >> b;

    int l, r, l_i, r_i, l_j, r_j;
    cin >> l >> r;

    l_i = l / a, r_i = r / b;
    l_j = m % g ? m / g + 1 : m / g; 
    r_j = m % s ? m / s + 1 : m / s; 
    if(l_i < r_i) {
        if(l_i + l_j < r_i + r_j) cout << "friskus";
        else cout << "latmask";
    }
    else {
        if(l_i + l_j < r_i + r_j) cout << "friskus";
        else cout << "latmask";
    }
}