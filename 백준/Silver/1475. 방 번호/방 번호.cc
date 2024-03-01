#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[10] = {0,};

    while(n)
    {
        int value = n % 10;
        n /= 10;

        if (value == 9 && arr[6] < arr[9]) arr[6]++;
        else if (value == 6 && arr[9] < arr[6]) arr[9]++;
        else arr[value]++;
    }

    int maximum = 0;
    for (auto e : arr)
        maximum = max(maximum, e);

    cout << maximum;
}
