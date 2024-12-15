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
        long q, w;
        cin >> q >> w;
        if (q != w) sample_ = false;
    }

    while(b--)
    {
        long q, w;
        cin >> q >> w;
        if (q != w) system_ = false;
    }

    if (sample_ && system_) cout << "Accepted";
    else if (system_) cout << "Wrong Answer";
    else if (sample_) cout << "Why Wrong!!";

}