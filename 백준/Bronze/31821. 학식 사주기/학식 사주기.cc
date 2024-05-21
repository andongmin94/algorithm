#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, sum = 0;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    cin >> m;
    while(m--)
    {
        int a;
        cin >> a;
        sum += v[a];
    }
    cout << sum;
}