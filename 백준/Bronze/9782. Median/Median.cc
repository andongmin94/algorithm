#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt = 1;
    while(true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<double> temp(n, 0);
        for (int i = 0; i < n; i++)
            cin >> temp[i];
        cout << fixed << setprecision(1);
        cout << "Case " << cnt++ << ": ";
        if (n % 2 != 0)
            cout << temp[(n+1)/2-1] << '\n';
        else cout << (temp[(n-1)/2] + temp[(n-1)/2 + 1])/2 << '\n'; 
    }
}