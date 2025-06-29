#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a = "", b = "";
    for (int i = 0; i < n; i++)
    {
        string a_; cin >> a_;
        a += a_;
    }
    for (int i = 0; i < n; i++)
    {
        string b_; cin >> b_;
        b += b_;
    }

    cout << min(stoll(a), stoll(b));
}
