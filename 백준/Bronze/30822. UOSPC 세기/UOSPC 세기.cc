#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    string b;
    cin >> a >> b;

    map<char, int> m;
    for (auto e : b)
    {
        if (e == 'u' || e == 'o' || e == 's' || e == 'p' || e == 'c')
            m[e]++;
    }
    int cnt = 1000;
    for (char ch : {'u', 'o', 's', 'p', 'c'})
    {
        cnt = min(cnt, m[ch]);  // m[ch] 없으면 0 반환됨 (map 기본 동작)
    }
    cout << cnt;
}
