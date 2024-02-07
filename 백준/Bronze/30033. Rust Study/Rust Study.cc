#include <bits/stdc++.h>

using namespace std;

int b[1000], c[1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int res = 0;
    for (int i = 0; i < a; i++)
        cin >> b[i];
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
        if (c[i] >= b[i])
            res++;
    }
    cout << res;
}
