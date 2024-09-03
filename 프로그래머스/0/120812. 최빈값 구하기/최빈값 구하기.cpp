#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    //
    int arr[1001] = {0,};
    
    for (const auto& e : array)
        arr[e]++;
    
    int max = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            answer = i;   
        }
        
    }
    
    int cnt = 0;
    for (int i = 0; i <= 1000; i++)
        if (max == arr[i]) cnt++;
    if (2 <= cnt) answer = -1;
    //
    return answer;
}