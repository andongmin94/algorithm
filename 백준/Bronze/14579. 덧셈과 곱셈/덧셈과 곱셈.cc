#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int sum = 1;
    for (int i = a; i <= b; i++)
    {
        int c = 0;
        for (int j = 1; j <= i; j++)
        {
            c += j;
        }
        sum *= c;
        sum %= 14579;
    }
    cout << sum;
}
