#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, arr[10] = {0,};
    cin >> n;
    while(n--)
    {
        int k;
        cin >> k;
        arr[k]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
            cout << i << '\n';
    }
}
