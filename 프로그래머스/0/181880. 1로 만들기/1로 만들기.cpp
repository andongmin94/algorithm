#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //
    for (auto& e : num_list)
    {
        while (e != 1)
        {
            if (!(e % 2))
            {
                e /= 2;
                answer++;
            }
            else e -= 1;
        }
    }
    //
    return answer;
}