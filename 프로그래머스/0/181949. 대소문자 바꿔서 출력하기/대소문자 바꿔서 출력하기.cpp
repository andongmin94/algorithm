#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    //
    for (auto& e : str)
    {
        if (e <= 'Z') cout << static_cast<char>(e + 32);
        else cout << static_cast<char>(e - 32);
    }
    //
    return 0;
}