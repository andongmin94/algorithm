#include <iostream>
using namespace std;

int arr[20000] = {0,};

int main() {
    // 여기에 코드를 작성해주세요.
    int idx = 10000;

    int t;
    cin >> t;
    while(t--)
    {
        int a;
        char b;

        cin >> a >> b;
        if (b =='R')
        {
            for (int i = idx; i < idx + a; i++)
            arr[i] = 2;
            idx += a - 1;
        }
        else
        {
            for (int i = idx; i > idx - a; i--)
            arr[i] = 1;
            idx -= a;
            idx++;
        }
    }
    int x = 0, y = 0;
    for (auto e : arr)
    {
        if (e == 1) x++;
        if (e == 2) y++;
    }
    cout << x << ' ' << y;
    return 0;
}