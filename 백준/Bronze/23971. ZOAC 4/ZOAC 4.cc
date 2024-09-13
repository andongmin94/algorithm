#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int rows = (a + (c)) / (c + 1);
    int cols = (b + (d)) / (d + 1);
    
    cout << rows * cols << '\n';
}
