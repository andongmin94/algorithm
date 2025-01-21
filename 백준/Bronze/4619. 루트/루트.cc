#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        long long b;
        int n;
        cin >> b >> n;
        if (!b && !n) break;
        
        int a = 1;
        while (true)
        {
            if (abs(b - pow(a, n)) > abs(b - pow(a + 1, n))) a++;
            else break;
        }
        cout << a << '\n';
    }
}
