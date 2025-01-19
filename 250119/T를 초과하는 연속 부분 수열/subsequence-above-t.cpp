#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int cnt = 0, cnt_m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > t) cnt++;
        else cnt = 0;
        if (cnt_m < cnt) cnt_m = cnt;
    }
    cout << cnt_m;
    return 0;
}