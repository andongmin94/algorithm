#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 7, max = 0;
    string k;

    while(n--)
    {
        string s;
        int a;
        cin >> s >> a;
        if (max < a)
        {
            max = a;
            k = s;
        }
    }

    cout << k;
}
