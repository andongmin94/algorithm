#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >>  s;

    map<char, int> m;
    
    for (auto e : s)
    {
        m[e]++;
    }
    int cnt = 100000;
    char c[] = {'H', 'I', 'A', 'R', 'C'};
    for (auto e : c)
    {
        if (m[e] < cnt) cnt = m[e];
    }
    cout << cnt;
}
