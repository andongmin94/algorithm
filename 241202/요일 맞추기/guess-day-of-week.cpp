#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int one = 0, two = 0;
    for (int i = 1; i < m1; i++)
        one += days[i];
    one += d1;
    for (int i = 1; i < m2; i++)
        two += days[i];
    two += d2;
    int k = two-one;
    if (k < 0)
    {
        k %= 7;
        k += 7;
    }
    string weekends[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << weekends[k];
    return 0;
}