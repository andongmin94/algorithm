#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    
    vector<long long> v(6);
    cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5];
    long long x, y;
    cin >> x >> y;

    
    long long sum = 0;
    long long i = n / y , j = n % y;

    for (const auto& e : v)
    {
        sum += e / x;
        if (e % x) sum++;
    }

    cout << sum << '\n' << i << ' ' << j;
}
