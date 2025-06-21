#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n, m;
    cin >> a >> n >> m;
    int cnt = 0, size = a;
    for (int i = 0; i < n + m; i++)
    {
        int temp;
        cin >> temp;
        if (temp)
        {
            if (cnt == size) size *= 2;
            cnt++;
        }
        else cnt--;
    }
    cout << size;
}
