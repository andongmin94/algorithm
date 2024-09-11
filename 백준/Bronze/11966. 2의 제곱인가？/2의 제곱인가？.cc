#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        if (static_cast<long long>(pow(2, i)) == n)
        {
            cout << 1;
            break;
        }

        if (static_cast<long long>(pow(2, i)) > n)
        {
            cout << 0;
            break;
        }
    }
}
