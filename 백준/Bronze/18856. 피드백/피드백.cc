#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << n << '\n';

    int cnt = 2;
    cout << "1 2 ";
    for (int i = 3; cnt != n - 1; i++)
    {
        cout << i << ' ';
        cnt++;
    }
    cout << 997;    
}
