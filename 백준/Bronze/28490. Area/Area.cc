#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, size = 0;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;

        if (w * h > size) size = w * h;
    }
    cout << size;
}
