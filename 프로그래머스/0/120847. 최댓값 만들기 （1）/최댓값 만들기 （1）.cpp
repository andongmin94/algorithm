#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    //
    int max = 0;
    int max_idx;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
            max_idx = i;
        }
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != max_idx && max * numbers[i] > answer) answer = max * numbers[i];
    }
    //
    return answer;
}