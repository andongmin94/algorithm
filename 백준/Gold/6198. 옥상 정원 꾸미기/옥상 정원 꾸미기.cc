#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> s;
    long long h;
    long long sum = 0;

    while (n--)
    {
        cin >> h;
        while (!s.empty() && s.top() <= h)
            s.pop();
        sum += s.size();
        s.push(h);
    }
    cout << sum;
}
