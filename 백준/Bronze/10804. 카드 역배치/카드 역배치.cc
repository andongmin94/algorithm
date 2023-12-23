#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[21] = {0,};
    for (int i = 0; i < 21; i++)
        a[i] = i;
    for (int i = 0; i < 10; i++)
    {
        int b, c;
        cin >> b >> c;
        while (b < c)
        {
            swap(a[b], a[c]);
            b++;
            c--;
        }
    }
    for (int i = 1; i < 21; i++)
        cout << a[i] << " ";
}
