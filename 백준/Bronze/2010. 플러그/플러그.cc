#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int sum = (n - 1) * -1;

    while(n--)
    {
        int a;
        cin >> a;
        sum += a;
    }

    cout << sum;
}
