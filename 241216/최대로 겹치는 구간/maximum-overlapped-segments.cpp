#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[202] = {0,};
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        a += 100;
        b += 100;
        for (int i = a; i < b; i++)
            arr[i]++;
    }

    int max_ = 0;
    for (auto e : arr)
        max_ = max(e, max_);
    cout << max_;
    return 0;
}