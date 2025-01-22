#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    vector<int> v(4, 0);
    v[0] = 1;
    v[3] = 2;
    for (auto e : s)
    {
        if (e == 'A') swap(v[0], v[1]);
        if (e == 'B') swap(v[0], v[2]);
        if (e == 'C') swap(v[0], v[3]);
        if (e == 'D') swap(v[1], v[2]);
        if (e == 'E') swap(v[1], v[3]);
        if (e == 'F') swap(v[2], v[3]);
    }
    
    int a, b;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1) a = i + 1;
        if (v[i] == 2) b = i + 1;
    }
    cout << a << '\n';
    cout << b << '\n';
}
