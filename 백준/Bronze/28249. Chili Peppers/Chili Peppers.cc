#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Poblano") sum += 1500;
        if (s == "Mirasol") sum += 6000;
        if (s == "Serrano") sum += 15500;
        if (s == "Cayenne") sum += 40000;
        if (s == "Thai") sum += 75000;
        if (s == "Habanero") sum += 125000;
    }
    cout << sum;
}
