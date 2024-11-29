#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    int a_ = 0, b_ = 0, ab_ = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 && i % b == 0) ab_++;
        if (i % a == 0) a_++;
        if (i % b == 0) b_++;
    }
    a_ -= ab_;
    b_ -= ab_;
    cout << a_ << ' ' << b_ << ' ' << ab_;
}
