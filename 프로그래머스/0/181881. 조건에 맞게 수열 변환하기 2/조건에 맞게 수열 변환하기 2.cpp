#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    //
    while(true)
    {
        bool check = false;
        for (auto& e : arr)
        {
            if (e >= 50 && !(e % 2))
            {
                e /= 2;
                check = true;   
            }
            else if (e < 50 && (e % 2))
            {
                e = e * 2 + 1;
                check = true;
            }
        }
        if (check) answer++;
        else break;
    }
    //
    return answer;
}