#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    list<char> b;
    for (char e : a)
        b.push_back(e);
    list<char>::iterator t = b.end();

    int k;
    cin >> k;
    
    for (int i = 0; i < k; i++)
    {
        char command;
        cin >> command;
        if (command == 'P')
        {
            char command2;
            cin >> command2;
            b.insert(t,command2);
        }
        if (command == 'L' && t != b.begin())
            --t;
        if (command == 'D' && t != b.end())
            ++t;
        if (command == 'B' && t != b.begin())
        {
            if (t == b.end())
            {
                --t;
                t = b.erase(t);
            }
            else
            {
                --t;
                t = b.erase(t);
            }
        }
    }
    for (auto e : b)
        cout << e;
}
