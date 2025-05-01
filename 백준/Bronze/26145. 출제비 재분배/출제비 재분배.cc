#include <bits/stdc++.h>

using namespace std;

int arr[2000 + 1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= n + m; j++)
        {
            int a;
            cin >> a;
            arr[j] += a;
            sum += a;
        }
        arr[i] -= sum;
    }

    for (int i = 1; i <= n + m; i++)
    {
        cout << arr[i] << ' ';
    }
}
