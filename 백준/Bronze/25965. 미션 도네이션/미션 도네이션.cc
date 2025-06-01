#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        int m; cin >> m;
        vector<long long> k_, d_, a_;
        while (m--)
        {
            long long a, b, c; cin >> a >> b >> c;
            k_.push_back(a);
            d_.push_back(b);
            a_.push_back(c);
        }
        long long k, d, a; cin >> k >> d >> a;

        long long sum = 0;
        for (int i = 0; i < k_.size(); i++)
        {
            long long temp = k_[i] * k - d_[i] * d + a_[i] * a;
            if (temp > 0) sum += temp;
        }
        cout << sum << '\n';
    }
}
