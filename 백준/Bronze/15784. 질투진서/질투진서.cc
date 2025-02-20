#include <bits/stdc++.h>

using namespace std;

int arr[1000][1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b; cin >> n >> a >> b;
    a--; b --;

    bool appearance = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][b] > arr[a][b]) appearance = true;
        if (arr[a][i] > arr[a][b]) appearance = true;
    }

    if (appearance) cout << "ANGRY";
    else cout << "HAPPY";
}
