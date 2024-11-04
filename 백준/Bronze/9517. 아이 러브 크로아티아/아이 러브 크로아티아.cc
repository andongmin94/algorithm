#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, cnt = 0;
    cin >> k >> n;
    
    while(n--)
    {
        int a;
        char b;
        cin >> a >> b;
        cnt += a;
        if (cnt <= 200)
        {
            if (b == 'T') k++;
            if (k == 9) k = 1;
        }
    }
    cout << k;
}
