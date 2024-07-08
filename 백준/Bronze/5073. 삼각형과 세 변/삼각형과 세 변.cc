#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(3);
        v[0] = a;
        v[1] = b;
        v[2] = c;
        sort(v.begin(), v.end());

        if (a == 0) break;

        if (a == b && b == c) cout << "Equilateral\n";
        else if (v[2] >= v[0] + v[1]) cout << "Invalid\n";
        else if (a == b || b == c || a == c) cout << "Isosceles\n";
        else if (a != b && b != c && a != c) cout << "Scalene\n";
    }
}
