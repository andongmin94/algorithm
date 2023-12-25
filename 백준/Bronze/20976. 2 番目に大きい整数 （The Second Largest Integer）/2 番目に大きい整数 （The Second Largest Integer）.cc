#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int b;
    cin >> b;
    a.push_back(b);
    cin >> b;
    a.push_back(b);
    cin >> b;
    a.push_back(b);
    sort(a.begin(), a.end());
    cout << a[1];
}
