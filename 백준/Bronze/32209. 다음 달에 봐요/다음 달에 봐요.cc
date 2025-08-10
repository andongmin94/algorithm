#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0, n; cin >> n;
    while (n--)
    {
        int a, b; cin >> a >> b;
        if (a == 1) sum += b;
        else
        {
            sum -= b;
            if (sum < 0)
            {
                cout << "Adios";
                return 0;
            }
        }
    }
    cout << "See you next month";
}
