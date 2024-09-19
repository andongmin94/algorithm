#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    //
    int arr[10] = {0,};
    while(n > 0)
    {
        arr[n % 10]++;
        n /= 10;
    }
    for (int i = 9; i >= 0; i--)
    {
        while(arr[i] > 0)
        {
            answer *= 10;
            answer += i;
            arr[i]--;
        }
    }
    //
    return answer;
}