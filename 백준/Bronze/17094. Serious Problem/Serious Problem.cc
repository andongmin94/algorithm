#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int cnt = 0, cnt_ = 0;
    for (auto e : s)
    {
        if (e == 'e') cnt++;
        else cnt_++;
    }
    if (cnt > cnt_) cout << 'e';
    if (cnt < cnt_) cout << 2;
    if (cnt == cnt_) cout << "yee";
}
 