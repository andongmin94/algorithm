#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        vector<int> v1(26);
        vector<int> v2(26);
        string b, c;
        cin >> b >> c;
        for (char e : b)
            v1[e - 'a']++;
        for (char e : c)
            v2[e - 'a']++;
        if (v1 == v2)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
}
