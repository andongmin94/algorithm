#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int i = 1;
    while(true)
    {
        if (1 + i + i * i == n) break;
        i++;
    }
    cout << i;
}