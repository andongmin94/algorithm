#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9] = {100,100,200,200,300,300,400,400,500};
    int res = 0;
    for (int i = 0; i < 9; i++)
    {
        int j; cin >> j;
        res += j;
        if (arr[i] < j)
        {
            cout << "hacker";
            return 0;
        }
        if (arr[i] == j)
        {
            cout << "draw";
            return 0;
        }
    }
    if (res >= 100) cout << "draw";
    else cout << "none";
}
