#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for(auto e: s)
        {
            if (e == 'U') cnt++;
            else break;
        }
        cout << cnt << '\n'; 
    }
}