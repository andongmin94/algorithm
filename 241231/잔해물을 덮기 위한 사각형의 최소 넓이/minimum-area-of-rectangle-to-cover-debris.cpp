#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2002][2002] = {0,};

    int a,b,c,d, cnt = 0;
    cin >> a >> b >> c >>d;
    a += 1000; b += 1000; c += 1000; d += 1000;

    for (int i = a; i < c; i++)
        for (int j = b; j < d; j++)
            cnt++;

    cin >> a >> b >> c >>d;
    a += 1000; b += 1000; c += 1000; d += 1000;

    for (int i = a; i < c; i++)
        for (int j = b; j < d; j++)
            if (arr[i][j]) cnt--;

    cout << cnt;
    return 0;
}