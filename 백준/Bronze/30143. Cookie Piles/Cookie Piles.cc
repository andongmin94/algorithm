#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = b;
        while(--a)
        {
            sum += b + c;
            b += c;
        }
        cout << sum << '\n';
    }
}
