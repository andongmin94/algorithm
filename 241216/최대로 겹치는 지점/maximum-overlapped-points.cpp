#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin >> t;
    int arr[100] = {0,};
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            arr[i]++;
    }
    int max_= 0;
    for (auto e : arr)
        max_ = max(e, max_);
    cout << max_;
    return 0;
}