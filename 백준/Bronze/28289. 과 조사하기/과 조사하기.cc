#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p; cin >> p;
    int one = 0, soft = 0, emb = 0, ai = 0;
    while (p--)
    {
        int g, c, n;
        cin >> g >> c >> n;
        if (g == 1) one++;
        else if (c == 1 || c == 2) soft++;
        else if (c == 3) emb++;
        else ai++;
    }
    cout << soft << '\n' << emb << '\n' << ai << '\n' << one;
}
