#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int stack = 0, idx;
    double max = 0;
    int n = 4;
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    while(n--)
    {
        double sum = a / c + b / d;
        if (max < sum)
        {
            max = sum;
            idx = stack;
        }
        double temp = a;
        a = c;
        c = d;
        d = b;
        b = temp;
        stack++;
    }
    cout << idx;
}