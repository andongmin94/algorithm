#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l[1000] = {0,};
    int r[1000] = {0,};

    int k = 3;
    while(k--)
    {
        int a, b;
        cin >> a >> b;
        l[a]++;
        r[b]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (l[i] == 1) cout << i << ' ';
    }
    for (int i = 0; i < 1000; i++)
    {
        if (r[i] == 1) cout << i;
    }
}
