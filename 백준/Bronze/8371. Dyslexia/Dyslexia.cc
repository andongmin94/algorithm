#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string a, b; cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i]) cnt++;
    cout << cnt;
}
