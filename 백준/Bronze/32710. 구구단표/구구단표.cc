#include <bits/stdc++.h>

using namespace std;

int arr[100] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            {
                arr[i * j]++;
                if (!arr[j])
                  arr[j]++;
            }
    }

    int n;
    cin >> n;
    if (arr[n]) cout << 1;
    else cout << 0;
}
