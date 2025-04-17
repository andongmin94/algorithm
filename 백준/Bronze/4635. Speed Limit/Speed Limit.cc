#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t != -1)
    {
        int time = 0, sum = 0;
        for (int i = 0; i < t; i++)
        {
            int a, b;
            cin >> a >> b;
            sum += a * (b - time);
            time = b;
        }
        cout << sum << " miles\n";
        cin >> t;
    }
}
