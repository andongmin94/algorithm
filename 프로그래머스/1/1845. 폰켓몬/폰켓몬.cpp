#include <vector>
using namespace std;

int arr[200001] = {0,};

int solution(vector<int> nums)
{
    int answer = 0;
    //
    int c = nums.size() / 2;
    for (auto e : nums)
        arr[e]++;
    for (int i = 0; i < 200001; i++)
        if (arr[i]) answer++;
    if (answer > c) answer = c;
    //
    return answer;
}