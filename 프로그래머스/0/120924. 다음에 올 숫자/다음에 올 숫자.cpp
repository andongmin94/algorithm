#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    //
    bool check = false;
    if (common[1] - common[0] == common[2] - common[1]) check = true;
    
    if (check) answer = common.back() + common[1] - common[0];
    else answer = common.back() * (common[1] / common[0]);
    //
    return answer;
}