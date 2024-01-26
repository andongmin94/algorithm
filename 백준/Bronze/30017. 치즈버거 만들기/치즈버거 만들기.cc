#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int cnt = 3;
    a -= 2;
    b -= 1;

    cout << cnt + min(a, b) * 2;
}