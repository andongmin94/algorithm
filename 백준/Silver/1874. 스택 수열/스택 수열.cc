#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> s;
    vector<char> result;
    bool broken = false;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while (cnt < num)
        {
            s.push(++cnt);
            result.push_back('+');
        }

        if (s.top() == num)
        {
            s.pop();
            result.push_back('-');
        }
        else
        {
            broken = true;
            break;
        }
    }
    if (broken)
        cout << "NO" << '\n';
    else
        for (auto e : result)
            cout << e << '\n';
}
