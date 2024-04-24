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

        cout << fixed << setprecision(1);
        cout << abs(a-b)<< '\n';
    }
}
