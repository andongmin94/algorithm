#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    while(n--)
    {
        int k;
        cin >> k;

        if (k > max(a, b))
        {
            if (pow(k,2) <= pow(a,2) + pow(b,2))
                cout << "DA\n";
            else cout << "NE\n";
        }
        else cout << "DA\n";
    }
}
