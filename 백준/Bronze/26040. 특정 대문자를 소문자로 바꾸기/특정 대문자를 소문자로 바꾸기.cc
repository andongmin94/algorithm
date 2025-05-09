#include <bits/stdc++.h>

using namespace std;

bool flag[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, buf, ans;
    getline(cin, a);
    getline(cin, b);
    istringstream ss(b);

    while (getline(ss, buf, ' ')) flag[buf[0] - 'A'] = true;
    for (int i = 0; i < a.length(); i++)
    {
        if (flag[a[i] - 'A'] && a[i] < 'a') cout << (char)(a[i] + 'a' - 'A');
        else cout << (char)a[i];
    }
}
