#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int arr[5] = {0,};
    
    for (int i = 0; i < t; i++)
        cin >> arr[i];

    int sum = 0;
    sum += arr[0] > arr[2] ? (arr[0] - arr[2]) * 508 : (arr[2] - arr[0]) * 108;
    sum += arr[1] > arr[3] ? (arr[1] - arr[3]) * 212 : (arr[3] - arr[1]) * 305;
    sum += arr[4] * 707;

    cout << sum * 4763;
}
