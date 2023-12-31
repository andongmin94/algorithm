#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> a;
    int sum = 0;
    
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int b;
        cin >> b;
        if (b != 0)
        {
            a.push(b);
            sum += b;
        }
        else
        {
            sum -= a.top();
            a.pop();
        }
    }
    cout << sum << '\n';
}
