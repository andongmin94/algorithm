#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(true)
    {
        int k;
        cin >> k;
        if (!k) break;
        if (k % n) cout << k << " is NOT a multiple of " << n << ".\n";
        else cout << k << " is a multiple of " << n << ".\n";
    }
}
