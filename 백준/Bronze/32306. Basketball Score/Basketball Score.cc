#include <complex.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 0, i_ = 0;
    while (i < 3)
    {
        i++;
        int a;
        cin >> a;
        i_ += a * i;
    }

    int j = 0, j_ = 0;
    while (j < 3)
    {
        j++;
        int a;
        cin >> a;
        j_ += a * j;
    }

    if (i_ > j_) cout << 1;
    else if (i_ < j_) cout << 2;
    else cout << 0;
}
