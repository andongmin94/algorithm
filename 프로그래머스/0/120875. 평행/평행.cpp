#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    //
    bool check = false;
    if ((double)(dots[0][1] - dots[1][1]) / (dots[0][0] - dots[1][0]) ==
    (double)(dots[2][1] - dots[3][1]) / (dots[2][0] - dots[3][0])) check = true;
        
    if ((double)(dots[0][1] - dots[2][1]) / (dots[0][0] - dots[2][0]) ==
    (double)(dots[1][1] - dots[3][1]) / (dots[1][0] - dots[3][0])) check = true;
        
    if ((double)(dots[0][1] - dots[3][1]) / (dots[0][0] - dots[3][0]) ==
    (double)(dots[2][1] - dots[1][1]) / (dots[2][0] - dots[1][0])) check = true;
    
    if (check) answer++;
    //
    return answer;
}