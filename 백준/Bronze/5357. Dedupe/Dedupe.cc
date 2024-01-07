#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        vector<char> v;

        v.push_back(s[0]);
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j - 1] == s[j])
                continue;
            v.push_back(s[j]);
        }
        for(auto e : v)
            cout << e;
        cout << '\n';
    }
}
