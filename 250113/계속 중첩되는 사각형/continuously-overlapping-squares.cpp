#include <iostream>

using namespace std;

int n;
int x1, y1;
int x2, y2;
int arr[300][300];
int cnt = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;
        if (i % 2)
        {
            for (int j = y1; j < y2; j++)
            {
                for (int k = x1; k < x2; k++)
                {
                    if (!arr[j][k])
                    {
                        arr[j][k]++;
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}