#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int a_arr[1000000 + 1];
int b_arr[1000000 + 1];

int main() {
    cin >> N >> M;

    int a = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i] >> t[i];
        for (int j = 0; j < t[i]; j++)
        {
            a_arr[a] = a_arr[a - 1] + v[i]; 
            a++;
        }
    }

    int b = 1;
    for (int i = 0; i < M; i++)
    {
        cin >> v2[i] >> t2[i];
        for (int j = 0; j < t2[i]; j++)
        {
            b_arr[b] = b_arr[b - 1] + v2[i];
            b++;
        }
    }

    int cnt = 0;
    bool a_ = false, b_ = false;
    for (int i = 1; i <= a; i++)
    {
        if (!a_ && !b_)
        {
            if (a_arr[i] > b_arr[i]) a_ = true;
            else if (a_arr[i] < b_arr[i]) b_ = true;
        }

        if (a_ && a_arr[i] < b_arr[i])
        {
            cnt++;
            a_ = !a_;
            b_ = !b_;
        }
        else if (b_ && a_arr[i] > b_arr[i])
        {
            cnt++;
            a_ = !a_;
            b_ = !b_;
        }
    }
    cout << cnt;
}