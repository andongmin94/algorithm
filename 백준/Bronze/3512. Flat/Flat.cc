#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, double> m;
    double n, c, size, sz;
    string type;

    cin >> n >> c;

    while (n--)
    {
        cin >> sz >> type;
        m[type] += sz;
        size += sz;
    }

    cout << size << '\n' << m["bedroom"] << '\n';
    printf("%.6f\n", c * (size - m["balcony"] / 2));
}
