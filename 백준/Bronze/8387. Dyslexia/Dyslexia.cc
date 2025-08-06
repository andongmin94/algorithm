#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string a, b; cin >> n >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i]) cnt++;
    }
    cout << cnt;
}
