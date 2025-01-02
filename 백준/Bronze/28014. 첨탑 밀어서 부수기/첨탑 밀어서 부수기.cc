#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 1;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i - 1] <= v[i])
            ans++;
    }
    
    cout << ans;
}
