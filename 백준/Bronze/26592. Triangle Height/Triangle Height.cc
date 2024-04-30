#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        double a, b;
        cin >> a >> b;

        double h = 2 * a / b;

        cout << fixed << setprecision(2) << "The height of the triangle is " << h << " units\n";
    }
}
