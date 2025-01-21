#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int n; cin >> n;
    
    int max_ = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = 0; j < 3; j++)
        {
            int a_, b_, c_;
            cin >> a_ >> b_ >> c_;
            res += a * a_;
            res += b * b_;
            res += c * c_;
        }
        if (max_ < res) max_ = res;
    }
    cout << max_;
}
