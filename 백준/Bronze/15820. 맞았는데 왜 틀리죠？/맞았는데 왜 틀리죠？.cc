#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    bool sample_ = true, system_ = true;

    while(a--)
    {
        string q, w;
        cin >> q >> w;
        if (q != w)
        {
            cout << "Wrong Answer";
            return 0;
        }   
    }

    while(b--)
    {
        string q, w;
        cin >> q >> w;
        if (q != w) system_ = false;
        if (q != w)
        {
            cout << "Why Wrong!!!";
            return 0;
        } 
    }
    cout << "Accepted";
}