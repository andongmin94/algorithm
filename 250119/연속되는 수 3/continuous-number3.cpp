#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Write your code here!

    int cnt = 1, cnt_m = 0;
    for (int i = 0; i < N; i++)
    {
        if (i && arr[i] > 0 && arr[i-1] > 0) cnt++;
        else if (i && arr[i] < 0 && arr[i-1] < 0) cnt++;
        else cnt = 1;

        if (cnt_m < cnt) cnt_m = cnt;
    }
    cout << cnt_m;
    return 0;
}