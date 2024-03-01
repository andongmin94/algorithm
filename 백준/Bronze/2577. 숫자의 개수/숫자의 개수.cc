#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = {0,};

    int a, b, c;
    cin >> a >> b >> c;

    int value = a * b * c;

    while (value)
    {
        arr[value % 10]++;
        value /= 10;
    }

    for (auto e : arr)
        cout << e << '\n';
}
