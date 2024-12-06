#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;

    vector<int> v;
    for (auto e : s)
    {
        v.push_back(e - '0');
    }        
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum * 2 + v[i];
    }
    sum *= 17;
    int arr[20] = {};
    int cnt = 0;
    while(true)
    {
        if (n < 2) arr[cnt] = n;
        if (n < 2) break;

        arr[cnt++] = n % 2;
        sum /= 2;
    }
    for (int i = cnt; i >= 0; i--)
        cout << arr[i];
}