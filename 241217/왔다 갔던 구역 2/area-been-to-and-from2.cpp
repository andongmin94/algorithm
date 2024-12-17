#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[400] = {0,};
    int t;
    cin >> t;
    int idx = 200;
    while(t--)
    {
        int a;
        char x;
        cin >> a >> x;
        if (x == 'R')
        {
            for (int i = idx; i < idx + a; i++)
            {
                arr[i]++;
            }
            idx += a;
        }
        else
        {
            for (int i = idx; i > idx - a; i--)
            {
                arr[i]++;
            }
            idx -= a;
        }
    }
    idx = 0;
    for (auto e : arr)
        if (e >= 2) idx++;
    cout << idx;
    return 0;
}