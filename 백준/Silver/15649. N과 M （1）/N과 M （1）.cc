#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10];
bool used[10];

void back_tracking(int t)
{
    if (t == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            arr[t] = i;
            used[i] = true;
            back_tracking(t+1);
            used[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    n, m;
    cin >> n >> m;

    back_tracking(0);
}
