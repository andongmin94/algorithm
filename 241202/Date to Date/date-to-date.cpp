#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for (int i = 1; i < m2; i++)
        sum += num_of_days[i];
    for (int i = 1; i < m1; i++)
        sum -= num_of_days[i];        
    cout << sum + d2 - d1 + 1;

    return 0;
}