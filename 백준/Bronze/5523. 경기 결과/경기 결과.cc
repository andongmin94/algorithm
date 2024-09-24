#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int i = 0, j = 0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b) i++;
        if (b > a) j++;
    }
    cout << i << ' ' << j;
}
