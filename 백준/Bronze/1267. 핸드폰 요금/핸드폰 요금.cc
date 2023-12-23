#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, sum_a = 0, sum_b = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        
        sum_a += (b / 30) * 10 + 10;
        sum_b += (b / 60) * 15 + 15;
    }
    if (sum_a < sum_b)
        cout << "Y " << sum_a << '\n';
    else if (sum_a > sum_b)
        cout << "M " << sum_b << '\n';
    else
        cout << "Y M " << sum_a << '\n';
}
