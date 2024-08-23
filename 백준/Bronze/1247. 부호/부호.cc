#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 0; i < 3; i++)
    {
        int n = 0;
        long long sum = 0, flow = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            long long tmp;
            cin >> tmp;
            long long pre = sum;
            sum += tmp;
            if (tmp > 0 && pre > 0 && sum < 0) flow++;
            if (tmp < 0 && pre < 0 && sum > 0) flow--;
        }
        if (!flow)
        {
            if (!sum) cout << '0' << '\n';
            if (sum > 0) cout << '+' << '\n';
            if (sum < 0) cout << '-' << '\n';
        }
        else cout << (flow > 0 ? '+' : '-') << '\n';
    }
}
