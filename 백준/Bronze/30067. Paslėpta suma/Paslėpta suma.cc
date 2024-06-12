#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[10];
    for (int n = 0; n < 10; n++)
        cin >> a[n];
    
    for (int i = 0; i < 10; i++)
    {
        int sum = 0;
        for (int j = 0; j < 10; j++)
        {
            if (i == j) continue;
            sum += a[j];
        }
        if (a[i] == sum)
        {
            cout << a[i];
            break;
        }
    }

}
