#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 8;
    int score = 0;

    while(n--)
    {
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == 'K') score += 0;
            if (e == 'P') score += 1;
            if (e == 'N') score += 3;
            if (e == 'B') score += 3;
            if (e == 'R') score += 5;
            if (e == 'Q') score += 9;
            if (e == 'k') score -= 0;
            if (e == 'p') score -= 1;
            if (e == 'n') score -= 3;
            if (e == 'b') score -= 3;
            if (e == 'r') score -= 5;
            if (e == 'q') score -= 9;
        }
    }

    cout << score;
}
