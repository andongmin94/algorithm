#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int d, n, s, p;
        cin >> d >> n >> s >> p;

        if (n * s > d + (n * p)) cout << "parallelize\n";
        if (n * s < d + (n * p)) cout << "do not parallelize\n";
        if (n * s == d + (n * p)) cout << "does not matter\n";
    }
}
