#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        for (auto e : s)
        {
            if (e == 'c') n++;
            else n--;
        }
        cout << "Data Set " << i << ":\n" << n << "\n\n";
    }
}
