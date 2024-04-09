#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int min = 1001;
    int min_l;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (min > b)
        {
            min_l = a;
            min = b;
        }
    }

    cout << min_l << ' ' << min;
}
