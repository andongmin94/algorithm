#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int answer = 0;
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    while(2 < arr[2] - arr[0])
    {
        answer++;
        if (arr[2] - arr[1] > arr[1] - arr[0]) arr[0] = arr[1] + 1;
        else arr[2] = arr[1] - 1;
        sort(arr.begin(), arr.end());
    }
    cout << answer;
}
