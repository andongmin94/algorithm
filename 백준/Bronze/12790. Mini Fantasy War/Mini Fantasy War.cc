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
        int hp, mp, atk, shi;
        cin >> hp >> mp >> atk >> shi;

        int a;
        cin >> a;
        hp += a;
        cin >> a;
        mp += a;
        cin >> a;
        atk += a;
        cin >> a;
        shi += a;

        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;
        if (atk < 0) atk = 0;

        cout << hp + 5 * mp + 2 * atk + 2 * shi << '\n';
    }
}
