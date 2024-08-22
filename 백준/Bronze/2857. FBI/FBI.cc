#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int i = 0;
    bool check = true;
    while(++i)
    {
        if (i == 6) break;
        string s;
        cin >> s;
        for (int k = 0; k < s.length() - 2; k++)
        {
            if (s[k] == 'F' && s[k + 1] == 'B' && s[k + 2] == 'I')
            {
                cout << i << " ";
                if (check) check = false;
                break;
            }
        }
    }
    if (check) cout << "HE GOT AWAY!";
}
