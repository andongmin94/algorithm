#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    
    while(t--)
    {
        string s;
        getline(cin, s);
        vector<char> v;
        for (auto e : s)
        {
            if (e != ' ') v.push_back(e);
            else
            {
                while(!v.empty())
                {
                    cout << v.back();
                    v.pop_back();
                }
                cout << e;
            }
        }
        while(!v.empty())
        {
            cout << v.back();
            v.pop_back();
        }
        if (t != 0) cout << '\n';
    }
}
