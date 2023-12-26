#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 0; i < a; i ++)
    {
        string b;
        cin >> b;
        
        list<char> c;
        list<char>::iterator d = c.end();

        for (auto e : b)
        {
            if (e != '<' && e!= '>' && e != '-')
                c.insert(d, e);
            else if (e == '<')
            {
                if (d != c.begin())
                    --d;
            }
            else if (e == '>')
            {
                if (d != c.end())
                    ++d;
            }
            else if (e == '-')
            {
                if (d != c.begin())
                {
                    --d;
                    d = c.erase(d);
                }
            }
        }
        for (auto e : c)
            cout << e;
        cout << '\n';
    }
}
