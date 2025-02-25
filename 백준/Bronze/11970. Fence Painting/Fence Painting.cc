#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    vector<int> v;
    v.push_back(a);v.push_back(b);v.push_back(c);v.push_back(d);
    for(int i = v[0]; i < v[1]; i++) arr[i]++;
    for(int i = v[2]; i < v[3]; i++) arr[i]++;
    for(int i = 0; i <= 100; i++)
    {
        if(arr[i]) cnt ++;
    }
    cout << cnt;
}
 