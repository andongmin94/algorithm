#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    function<void(long long)> f = [&](long long n) -> void
    {
        bool check = false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (!(n % i))
            {
                check = true;
                break;
            }
        }
        if (check) cout << n;
        else f(n + 1);
    };
    f(n);
}
