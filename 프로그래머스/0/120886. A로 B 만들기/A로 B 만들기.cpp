#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    //
    int arr[26] = {0,};
    int arr2[26] = {0,};
    for (int i = 0; i < before.length(); i++)
    {
        arr[before[i] - 'a']++;
        arr2[after[i] - 'a']++;
    }
    answer++;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != arr2[i])
        {
            answer = 0;
            break;
        }
    }
    //
    return answer;
}