#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    bool time, date;
    while (t--)
    {
        int x, y; cin >> x >> y;
        bool time = false; date = false;
        if (x <= 23 && y <= 59) time = true;
        if (x <= 12 && x >= 1)
        {
            if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
            {
                if (y <= 31 && y >= 1) date = true;                
            }
            if (x == 4 || x == 6 || x == 9 || x == 11)
            {
                if (y <= 30 && y >= 1) date = true; 
            }
            if (x == 2)
            {
                if (y <= 29 && y >= 1) date = true; 
            }
        }
        
        if (time) cout << "Yes ";
        else cout << "No ";
        if (date) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
}
