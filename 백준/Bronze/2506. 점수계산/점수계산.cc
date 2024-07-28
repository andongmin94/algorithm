#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sum = 0, stack = 0;
    while(n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            stack++;
            sum += stack;
        }
        else
        {
            stack = 0;
        }
    }
    cout << sum;
}
