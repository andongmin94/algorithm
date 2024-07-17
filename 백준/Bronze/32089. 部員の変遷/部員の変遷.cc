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
        if (n == 0) break;


        int sum = 0;
        int arr[1000];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 2; i++)
        {
            if (sum < arr[i] + arr[i + 1] + arr[i + 2])
                sum = arr[i] + arr[i + 1] + arr[i + 2];
        }
        cout << sum << '\n';
    }
}
