#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[2] = {0,};
    while(n--)
    {
        int k;
        cin >> k;
        arr[k]++;
    }

    if (arr[0] > arr[1]) cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";
}
