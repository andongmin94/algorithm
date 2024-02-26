#include <bits/stdc++.h>

using namespace std;

long long recur(int a, int b, int c)
{
    if (b == 1) return a % c;

    long long value = recur(a, b/2, c);
    value = value * value % c;

    if (b % 2 == 0) return value;
    return value * a % c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << recur(a, b, c);
}