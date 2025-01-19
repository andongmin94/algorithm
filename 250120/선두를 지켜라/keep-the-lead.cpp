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

    int leader = 0, ans = 0;
    for(int i = 1; i < a; i++)
    {
        if(a_arr[i] > b_arr[i])
        {
            // 기존 리더가 B였다면
            // 답을 갱신합니다.
            if(leader == 2)
                ans++;
            
            // 리더를 A로 변경합니다.
            leader = 1; 
        }
        else if(a_arr[i] < b_arr[i])
        {
            // 기존 리더가 A였다면
            // 답을 갱신합니다.
            if(leader == 1)
                ans++;
            
            // 리더를 B로 변경합니다.
            leader = 2; 
        }
    }
    
    cout << ans;
    return 0;
}