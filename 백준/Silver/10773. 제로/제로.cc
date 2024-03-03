#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> s;
    int k;
    cin >> k;
    while(k--)
    {
        int n;
        cin >> n;

        if(n) s.push(n);
        else s.pop();
    }
    int sum = 0;
    while(!s.empty())
    {
        int temp = s.top();
        sum += temp;
        s.pop();
    }
    cout << sum;
}
