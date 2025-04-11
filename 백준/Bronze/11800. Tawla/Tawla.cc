#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, string> m;
    m.insert({1, "Yakk"});
    m.insert({2, "Doh"});
    m.insert({3, "Seh"});
    m.insert({4, "Ghar"});
    m.insert({5, "Bang"});
    m.insert({6, "Sheesh"});

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Case " << i << ": ";

        int a, b; cin >> a >> b;
        if (a != b)
        {
            string s = m[max(a, b)] + ' ' + m[min(a, b)];
            if (s == "Sheesh Bang") cout << "Sheesh Beesh";
            else cout << s;
        }
        else
        {
            if (a == 1) cout << "Habb Yakk";
            if (a == 2) cout << "Dobara";
            if (a == 3) cout << "Dousa";
            if (a == 4) cout << "Dorgy";
            if (a == 5) cout << "Dabash";
            if (a == 6) cout << "Dosh";
        }
        
        cout << '\n';
    }
}
