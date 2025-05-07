#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    // Please write your code here.
    int cnt = 0;
    for (int i = st; i <= ed; i++)
    {
        int cnt_ = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0) cnt_++;
        if (cnt_ == 3) cnt++;
    }
    cout << cnt;

    return 0;
}
