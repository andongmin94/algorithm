#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k;
    cin >> k;

    int i = 1;
    while(k != 1)
    {
        if (k % 2)
        {
            k *= 3;
            k += 1;
        }
        else k /= 2;
        i++;
    }
    cout << i;
}
