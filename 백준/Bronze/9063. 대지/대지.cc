#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int max_w = -10001, min_w = 10001, max_h = -10001, min_h = 10001;
    while(n--)
    {
        int a, b;
        cin >> a >> b;

        if(max_w < a) max_w = a;
        if(min_w > a) min_w = a;
        if(max_h < b) max_h = b;
        if(min_h > b) min_h = b;
    }
    cout << (max_w - min_w) * (max_h - min_h);
}
