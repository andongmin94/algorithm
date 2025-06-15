#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n; cin >> n;
        if (!n) break;
        int m = 0, j = 0;
        while (n--)
        {
            int t; cin >> t;
            if (t) j++;
            else m++;
        }
        cout << "Mary won " << m << " times and John won " << j <<" times\n";
    }
}
