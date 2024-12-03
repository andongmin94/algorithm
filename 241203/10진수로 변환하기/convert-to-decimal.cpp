#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;

    vector<int> v;
    for (auto e : s)
        v.push_back(e - '0');
    
    int num = 0;

    for (auto e : v)
        num = num * 2 + e;

    cout << num;
    return 0;
}