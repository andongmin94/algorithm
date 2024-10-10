#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    long long sum = 0;
    while(a)
    {
        sum += b * a + c * a * a;
        a--;
    }
    cout << sum;
}