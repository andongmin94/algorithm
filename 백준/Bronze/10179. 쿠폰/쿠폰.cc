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
        double a;
        cin >> a;
        cout << fixed << setprecision(2) << '$' << a * 0.8 << '\n';
    }
}
