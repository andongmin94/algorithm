#include <iostream>
#include <iomanip>  // <iomanip> 헤더 추가
using namespace std;

int main() {
    // Please write your code here.
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3) << a << '\n' << b << '\n' << c;
    return 0;
}