#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int sum, k;
        cin >> sum >> k;
        while(k--)
        {
            int q, p;
            cin >> q >> p;
            sum += q * p;
        }
        cout << sum << '\n';
    }
}
