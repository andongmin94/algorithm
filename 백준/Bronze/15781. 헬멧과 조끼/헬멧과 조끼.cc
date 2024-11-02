#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> v, v2;
    while(n--)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    while(m--)
    {
        int k;
        cin >> k;
        v2.push_back(k);
    }
    sort(v.begin(), v.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());
    cout << v[0] + v2[0] << '\n';
}