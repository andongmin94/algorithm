#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[202][202] = {0,};
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        a += 100;
        b += 100;

        for (int i = a; i < a + 8; i++)
        {
            for (int j = b; j < b + 8; j++)
                arr[i][j]++;
        }
    }
    int res = 0;
    for (auto& e : arr)
    {
        for (auto& e_ : e)
            if (e_) res++;
    }
    cout << res;
    return 0;
}