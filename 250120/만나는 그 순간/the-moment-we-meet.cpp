#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Write your code here!
    int a = 0;
    int a_arr[1000] = {0,};
    int a_idx = 0;
    int b = 0;
    int b_arr[1000] = {0,};
    int b_idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 'R')
        {
            while (t[i]--)
            {
                a++;
                a_arr[a_idx++] = a;
            }
        }
        else
        {
            while (t[i]--)
            {
                a--;
                a_arr[a_idx++] = a;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (d2[i] == 'R')
        {
            while (t2[i]--)
            {
                b++;
                b_arr[b_idx++] = b;
            }
        }
        else
        {
            while (t2[i]--)
            {
                b--;
                b_arr[b_idx++] = b;
            }
        }
    }

    int idx = 0;
    while(idx < 1000)
    {
        if (a_arr[idx] == b_arr[idx])
        {
            cout << idx + 1;
            return 0;
        }
        idx++;
    }
    cout << -1;
    return 0;
}