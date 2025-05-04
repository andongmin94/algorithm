#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, seed, x1, x2, a, c;
    cin >> m >> seed >> x1 >> x2;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x1_ = (i * seed + j) % m;
            int x2_ = (i * x1_ + j) % m;

            if (x1 == x1_ && x2 == x2_)
            {
                a = i;
                c = j;
            }
        }
    }
    cout << a << ' ' << c;
}
