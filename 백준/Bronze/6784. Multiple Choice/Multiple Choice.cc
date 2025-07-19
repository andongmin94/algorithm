#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    int m = n;
    vector<char> v1;
    vector<char> v2;
    while (n--)
    {
        char t; cin >> t;
        v1.push_back(t);
    }
    while (m--)
    {
        char t; cin >> t;
        v2.push_back(t);
    }
    for (int i = 0; i < v1.size(); i++)
        if (v1[i] == v2[i]) cnt++;
    cout << cnt;
}
