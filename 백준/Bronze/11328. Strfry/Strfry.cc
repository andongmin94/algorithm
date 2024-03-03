#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        vector<int> v1(26);
        vector<int> v2(26);
        string a, b;
        cin >> a >> b;
        for (char e : a) v1[e - 'a']++;
        for (char e : b) v2[e - 'a']++;
        if (v1 == v2) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
}
