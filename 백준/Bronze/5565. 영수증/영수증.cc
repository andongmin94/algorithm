#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 9;

    int sum;
    cin >> sum;
    while(n--)
    {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum;
}
