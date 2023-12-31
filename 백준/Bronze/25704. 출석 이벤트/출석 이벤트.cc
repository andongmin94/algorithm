#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
    int c = a < b ? a : b;
    if (c < 0)
        c = 0;
    return c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, P;
    cin >> N >> P;
    if (N < 5)
        cout << P << '\n';
    else if (N >= 5 && N < 10)
        cout << min(P - 500, P - 500) << '\n';
    else if (N >= 10 && N < 15)
        cout << min(P - 500, P * 0.9) << '\n';
    else if (N >= 15 && N < 20)
        cout << min(P - 2000, P * 0.9) << '\n';
    else cout << min(P - 2000, P * 0.75) << '\n';
}
