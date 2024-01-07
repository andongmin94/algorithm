#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        stack<char> stack;
        string string;
        cin >> string;

        for (auto e : string)
        {
            if (!(stack.empty()) && e == stack.top())
                stack.pop();
            else stack.push(e);
        }
        if(stack.empty())
            sum++;
    }
    cout << sum;
}
