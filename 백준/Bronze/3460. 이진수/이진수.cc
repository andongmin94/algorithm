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
        int a;
        cin >> a;
        int idx = 0;

        while(a)
        {
            if (a % 2) cout << idx << ' ';
            idx++;
            a /= 2;
        }

        cout << '\n';
    }

}
