#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        bool b = true;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == 'O')
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << "ESCAPE FAILED";
}
