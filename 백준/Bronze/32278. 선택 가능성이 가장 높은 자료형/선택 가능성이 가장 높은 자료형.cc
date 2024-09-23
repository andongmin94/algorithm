#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n <= pow(2,15) - 1 && n >= -pow(2,15)) cout << "short";
    else if (n <= pow(2,31) - 1 && n >= -pow(2,31)) cout << "int";
    else cout << "long long";
}
