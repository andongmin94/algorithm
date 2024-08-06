#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a = 100, b = 100;
    while(n--)
    {
        int a_, b_;
        cin >> a_ >> b_;
        if (a_ > b_) b -= a_;
        if (a_ < b_) a -= b_;
    }
    cout << a << ' ' << b;
}
