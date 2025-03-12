#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int b;
    cin >> n >> b;
    if (n > 5)
    {
        cout << "Love is open door";
        return 0;
    }
    n--;
    while (n--)
    {
        if (b) b--;
        else b++;
        cout << b << '\n';
    }
}
