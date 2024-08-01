#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int ball = 1;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == ball)
            ball = b;
        else if (b == ball)
            ball = a;
    }
    cout << ball;
}
