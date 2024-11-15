#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> v;
    while(v.size() < 9)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int a = 0, b = 0;
    for (auto e : v)
    {
        if (e == "Lion") a++;
        else b++;
    }
    cout << (a > b ? "Lion" : "Tiger");
}