#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    long long cnt = 0, sum = 0;
    while(t--)
    {
        int k;
        cin >> k;
        if (k == 0) cnt--;
        else cnt++;
        sum += cnt;
    }
    cout << sum; 
}