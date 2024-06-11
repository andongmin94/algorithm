#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int num[10];
    int cnt = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num[j];
            if (num[j] == 7) cnt++;
        }
    }

    if (cnt == 3) cout << 777;
    else cout << 0;
}
