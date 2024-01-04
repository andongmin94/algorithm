#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    int tmp;
    int res = 0;

    int* arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
            {
                tmp = arr[i] + arr[j] + arr[k];
                if (abs(tmp - M) <= abs(res - M) && tmp <= M)
                    res = tmp;
            }
    cout << res;

    delete[] arr;
}
