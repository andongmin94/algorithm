#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double pi = M_PI;
    double a1, p1, a2, p2;
    cin >> a1 >> p1 >> a2 >> p2;
    double r = a2 * a2 * pi;

    cout << (a1 / p1 > r / p2 ? "Slice of pizza" : "Whole pizza");
}
