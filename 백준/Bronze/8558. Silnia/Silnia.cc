#include <bits/stdc++.h>

using namespace std;

int fac(int N)
{
    if (N <= 0)
        return 1;

    return N * fac(N - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    N = fac(N);
    cout << N % 10;
}
