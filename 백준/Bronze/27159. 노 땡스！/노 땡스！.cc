#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;

    int n, sum = 0; cin >> n;
    while (n--)
    {
        int k; cin >> k;
        if (v.empty())
        {
            sum += k;
            v.push_back(k);
            continue;
        }
        
        if (k > v.back() + 1) sum += k;
        
        v.push_back(k);
    }
    cout << sum;
}
