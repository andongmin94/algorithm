#include <bits/stdc++.h>

using namespace std;

int  subin[200001] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    queue<int> Q;
    Q.push(n);
    subin[n] = 1;

    while (!(Q.empty()))
    {
        int a = Q.front();
        if (a == k)
        {
            cout << subin[a] - 1;
            break;
        }
        Q.pop();
        if (a - 1 >= 0 && a - 1 <= 200000 && subin[a - 1] == 0)
        {
            Q.push(a - 1);
            subin[a - 1] = subin[a] + 1;
        }
        if (a + 1 >= 0 && a + 1 <= 200000 && subin[a + 1] == 0)
        {
            Q.push(a + 1);
            subin[a + 1] = subin[a] + 1;
        }
        if (a * 2 >= 0 && a * 2 <= 200000 && subin[a * 2] == 0)
        {
            Q.push(a * 2);
            subin[a * 2] = subin[a] + 1;
        }
    }
}