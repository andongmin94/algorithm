#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        cout << "Pairs for " << a << ": ";

        for (int i = 1; i < a - 1; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (i + j == a && i == 1) cout << i << ' ' << j;
                else if (i + j == a) cout << ", " << i << ' ' << j;
            }
        }
        cout << '\n';
    }
}
