#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> a;
    int n = 3;
    while (n--)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(), a.end());

    int min = 100;

    for (int i = 1; i < a.size(); i++)
        if (a[i] - a[i - 1] < min) min = a[i] - a[i - 1];
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - a[i - 1] != min)
        {
            cout << a[i - 1] + min;
            break;
        }
        if (i == a.size() - 1) cout << a[i] + min;
    }
}
