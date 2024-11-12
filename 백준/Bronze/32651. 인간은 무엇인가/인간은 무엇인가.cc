#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    if (n % 2024 == 0 && n <= 100000) cout << "Yes";
    else cout << "No";
}