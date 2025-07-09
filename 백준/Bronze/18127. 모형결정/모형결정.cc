#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    
    long long sum = 1;
    long long cnt = 1;

    while (b--)
    {
        cnt += a - 2;
        sum += cnt;
    }
    cout << sum;
}
