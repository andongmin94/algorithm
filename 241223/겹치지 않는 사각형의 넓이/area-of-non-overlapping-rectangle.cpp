#include <iostream>
using namespace std;

int arr[2000][2000] = {0,};

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;
    int a = 2;
    while(a--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
                arr[i][j] = 1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = x1; i < x2; i++)
    {
        for (int j = y1; j < y2; j++)
            arr[i][j] = 0;
    }
    
    int cnt = 0;
    for (auto& e : arr)
        for (auto e_ : e)
                if (e_) cnt++;
    cout << cnt;
    return 0;
}