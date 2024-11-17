#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    while(n--)
    {
        string s;
        
        getline(cin, s);
        
        string t = "god";
        bool now = false;
        
        for (auto e : s)
        {
            if (e != ' ' && now) t += e;
            if (e == ' ' && !now) now = true;
        }
        cout << t << '\n';
    }
}
