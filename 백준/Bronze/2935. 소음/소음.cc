#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    char c;
    cin >> a >> c >> b;
    

    if (c == '*')
    {
        cout << a;
        for (auto e : b)
            if (e == '0') cout << 0;
    }
    else
    {
        if (a.length() == b.length())
        {
            cout << 2;
            for (auto e : b)
                if (e == '0') cout << 0;
        }
        else
        {
            if (a.length() > b.length())
            {
                int n = a.length() - b.length();

                for (int i = 0; i < n; i++)
                    cout << a[i];
                for (auto e : b)
                    cout << e;
            }
            else
            {
                int n = b.length() - a.length();

                for (int i = 0; i < n; i++)
                    cout << b[i];
                for (auto e : a)
                    cout << e;
            }
            
        }
    }
}
