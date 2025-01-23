#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, p; cin >> n >> k >> p;
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt_ = 0;
        for (int j = 0; j < k; j ++)
        {
            int m; cin >> m;
            if (!m) cnt_++;
        }
        if (cnt_ < p) cnt++;
    }
    cout << cnt;
}