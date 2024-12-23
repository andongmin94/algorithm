#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[200][200] = {0,};

    int t;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                arr[i+100][j+100]++;
    }
    int cnt = 0;
    for (auto& e : arr)
        for (auto e_ : e)
            if (e_) cnt++;
    
    cout << cnt;
    return 0;
}