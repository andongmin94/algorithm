#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max = 0, arr[1001] = {0,};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        arr[t]++;
        if (max < t) max = t;
    }
    bool b = true;
    for (int i = 1; i <= max; i++)
    {
        if (!arr[i])
        {
            b = false;
            cout << i << '\n';
        }
    }
    if (b) cout << "good job";
}
