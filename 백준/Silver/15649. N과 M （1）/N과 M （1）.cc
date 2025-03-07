#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10];
bool isused[10];
void func(int k);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0);
}

void func(int k)
{
    if (k == m)
    {
        for (int i = 0; i < k; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!isused[i])
        {
            arr[k] = i;
            isused[i] = 1;
            func(k + 1);
            isused[i] = 0;
        }
    }
}
