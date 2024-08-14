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
        int arr[7];
        int sum = 0, min = 100;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            if (!(arr[i] % 2) && arr[i] < min) min = arr[i];
            if (!(arr[i] % 2)) sum += arr[i];
        }
        cout << sum << ' ' << min << '\n';
    }
}
