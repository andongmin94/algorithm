#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 15; i++)
    {
        bool check = false;
        string s;
        getline(cin, s);
        for (auto e : s)
            if (e == 'w')
            {
                check = true;
                cout << "chunbae";
                break;
            }
            else if (e == 'b')
            {
                cout << "nabi";
                check = true;
                break;
            }
            else if (e == 'g')
            {
                check = true;
                cout << "yeongcheol";
                break;
            }
        if (check)
            break;
    }
}
