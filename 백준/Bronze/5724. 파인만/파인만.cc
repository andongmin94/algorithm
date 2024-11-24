#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n;
        cin >> n;

        if (!n) break;

        int sum = 0;
        while (n)
        {
            sum += n * n;
            n--;
        }
        cout << sum << '\n';
    }
}
