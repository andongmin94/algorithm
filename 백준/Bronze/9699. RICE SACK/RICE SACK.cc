#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int max = 0;
        int temp;
        for (int j = 0; j < 5; j++)
        {
            cin >> temp;
            if (max < temp) max = temp;
        }
        cout << "Case #" << i << ": " << max << '\n';
    }
}
