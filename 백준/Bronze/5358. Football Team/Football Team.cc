#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 0;
    while (i < 100)
    {
        i++;
        string string;
        getline(cin, string);


        for (auto e : string)
        {
            if (e == 'i')
                cout << 'e';
            else if (e == 'e')
                cout << 'i';
            else if (e == 'I')
                cout << 'E';
            else if (e == 'E')
                cout <<  'I';
            else
                cout << e;
        }

        cout << '\n';
    }
}
