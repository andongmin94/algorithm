#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 0; i <= k; i++)
        sum += n * pow(10, i);
    cout << sum;
}
