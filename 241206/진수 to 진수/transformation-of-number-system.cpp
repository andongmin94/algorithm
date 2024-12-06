#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    
    vector<int> v;
    for (auto e : s)
        v.push_back(e - '0');
    int sum = 0;
    for (auto e : v)
        sum = sum * a + e;
    
    int arr[20] = {};
    int cnt = 0;
    while(true)
    {
        if (sum < b) arr[cnt] = sum;
        if (sum < b) break;

        arr[cnt++] = sum % b;
        sum /= b;
    }
    for (int i = cnt; i >= 0; i--)
        cout << arr[i];
}