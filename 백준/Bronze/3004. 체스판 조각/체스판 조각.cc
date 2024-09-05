#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int hr = n / 2;
    int vt = n - hr;

    cout << (hr + 1) * (vt + 1);
}