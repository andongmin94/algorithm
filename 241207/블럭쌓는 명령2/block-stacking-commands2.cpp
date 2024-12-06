#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    while(k--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            v[i-1]++;
    }
    int max_ = 0;
    for (auto e : v)
        max_ = max(e, max_);
    cout << max_;
    return 0;
}