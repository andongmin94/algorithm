#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = -1;
    //
    answer++;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int l = nums[i] + nums[j] + nums[k];
                bool m = true;
                for (int n = 2; n < l; n++)
                    if (l % n == 0) m = false;
                if (m) answer++;
            }
        }
    }
    //
    return answer;
}