#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    for (int i = n; i > 0; i--)
        sum += i * i * i;
    cout << sum;
}
