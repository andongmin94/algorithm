#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = 10;
    int arr[10] = {0,};
    int max = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum -= a;
        sum += b;

        if (max < sum) max = sum;
    }

    cout << max;
}
