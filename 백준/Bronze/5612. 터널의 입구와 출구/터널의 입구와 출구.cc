#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, sum;
    cin >> t >> sum;
    int max_ = sum;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        sum += a;
        sum -= b;
        if (sum < 0)
        {
            max_ = 0;
            break;
        }
        if (max_ < sum) max_ = sum;
    }
    cout << max_;
}