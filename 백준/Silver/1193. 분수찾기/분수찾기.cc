#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    bool diagnol = true;
    int l = 1, r = 1;

    while(--x)
    {
        if (diagnol)
        {
            r++;
            if (l == 1) diagnol = !diagnol;
            else l--;
        }
        else
        {
            l++;
            if (r == 1) diagnol = !diagnol;
            else r--;
        }
    }
    cout << l << '/' << r;
}