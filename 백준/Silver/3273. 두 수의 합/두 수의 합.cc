#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    
    for (auto& e : v)
        cin >> e;
    
    int x;
    cin >> x;
    vector<int> v2(x);
    int sum = 0;
    
    for (auto e : v)
    {
        if (x - e > 0 && v2[x - e] == 1) sum++;
        else if (x - e > 0) v2[e]++;
    }
    cout << sum;
}
