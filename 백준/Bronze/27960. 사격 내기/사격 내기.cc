#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = {0,};
    int arr_[10] = {0,};
    
    int a, b, res = 0;
    cin >> a >> b;
    
    for (int i = 0; i < 10; i++)
        arr[i] = pow(2, i);

    for (int i = 9; i >= 0; i--)
    {
        if (a >= arr[i])
        {
            arr_[i]++;
            a -= arr[i];
        }
        if (b >= arr[i])
        {
            arr_[i]++;
            b -= arr[i];
        }
        if (arr_[i] == 1) res += arr[i];
    }
    cout << res;
}
