#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector<int> v_odd;
    vector<int> v_even;
    for (int i = 0; i < t; i++)
    {
        int n; cin >> n;
        if (n % 2) v_odd.push_back(n);
        else v_even.push_back(n);
    }
    if (v_even.size() == t / 2) cout << 1;
    else cout << 0;
}
