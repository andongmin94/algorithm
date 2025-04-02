#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] < v2[i]) cnt += (v2[i] - v1[i]);
    }
    cout << cnt;
}
