#include <iostream>
using namespace std;
int arr[20000] = {0,};
int main() {
    int t;
    cin >> t;

    int idx = 10000;
    while(t--)
    {
        int x;
        char y;
        cin >> x >> y;
        if (y == 'R')
        {
            for (int i = idx; i < idx + x; i++)
            {
                arr[i]++;
            }
            idx += x;
        }
        if (y == 'L')
        {
            for (int i = idx; i > idx - x; i--)
            {
                arr[i]++;
            }
            idx -= x;
        }
    }
    int w = 0, b = 0, g = 0;
    for (auto e : arr)
    {
        if (e == 1 || e == 3) b++;
        if (e == 2) w++;
        if (e >= 4) g++;
    }
    cout << w << ' ' << b << ' ' << g;
    return 0;
}