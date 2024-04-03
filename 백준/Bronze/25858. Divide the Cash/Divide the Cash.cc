#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[30];
    int n, d, cnt = 0, avg = 0;
    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt += arr[i];
    }

    avg = d / cnt;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * avg << '\n';
    }
}
