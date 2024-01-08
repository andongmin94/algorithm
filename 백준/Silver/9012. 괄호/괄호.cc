#include <bits/stdc++.h>

using namespace std;

int B[100000]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        stack<char> stack;

        string string;
        cin >> string;

        for (auto e : string)
        {
            if (e == '(')
                stack.push(e);

            else if (!(stack.empty()) && e == ')')
            {
                if (stack.top() == '(')
                    stack.pop();
                else stack.push(e);
            }

            else stack.push(e);
        }

        if (stack.empty())
            cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
