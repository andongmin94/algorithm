#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long a, b; cin >> a >> b;
        
        cout << "Scenario #" << i << ":\n";

        cout << (a + b) * abs(a - b - 1) / 2 << "\n\n";
    }
}
