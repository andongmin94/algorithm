#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    //
    int arr[10001] = {0,};
    int temp = n;
    for (int i = 2; i <= n; i++)
    {
        while(!(temp % i))
        {
            arr[i]++;
            temp /= i;
        }
    }
    for (int i = 0; i <= n; i++)
        if (arr[i]) answer.push_back(i);
    //
    return answer;
}