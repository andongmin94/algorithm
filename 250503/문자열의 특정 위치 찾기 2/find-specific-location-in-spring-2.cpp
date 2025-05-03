#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<string> v;
    v.push_back("apple");
    v.push_back("banana");
    v.push_back("grape");
    v.push_back("blueberry");
    v.push_back("orange");
    char c; cin >> c;
    int cnt = 0;
    for (auto e : v)
    {
        if (e[2] == c || e[3] == c) cout << e << '\n';
        if (e[2] == c || e[3] == c) cnt++;
    }
    cout << cnt;
    return 0;
}