#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int sum = 0;

    string t = "";
    for (auto e : s)
    {
        if (isdigit(e)) t += e;
        else
        {
            sum += stoi(t);
            t = "";
        };
    }
    if (t != "") sum += stoi(t);
    cout << sum;
}
