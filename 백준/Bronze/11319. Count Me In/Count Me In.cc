#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    char c[] = {'A','E','I','O','U','a','e','i','o','u'};
    cin.ignore();
    while (n--)
    {
        int a = 0, b = 0;
        string s;
        getline(cin, s);

        for (auto e : s)
        {
            if (e == ' ') continue;
            bool b_ = true;
            for (auto e_ : c)
            {
                if (e == e_)
                {
                    b_ = false;
                    break;
                }
            }
            if (b_) a++;
            else b++;
        }
        if (a != 0 && b != 0) cout << a << ' ' << b << '\n';
    }
}
