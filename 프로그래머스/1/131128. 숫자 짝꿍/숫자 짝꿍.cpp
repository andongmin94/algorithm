#include <string>
#include <vector>

using namespace std;

int arrX[10] = {0,};
int arrY[10] = {0,};

string solution(string X, string Y) {
    string answer = "";
    //
    for (auto e : X)
        arrX[e - '0']++;
    for (auto e : Y)
        arrY[e - '0']++;
    for (int i = 9; i >= 0; i--)
    {
        int cnt = min(arrX[i], arrY[i]);
        while(cnt--)
            answer += to_string(i);
    }
    if (answer == "") answer += "-1";
    bool z = true;
    for (auto e : answer)   
    {
        if (e != '0') z = false;
        break;
    };
    if (z) answer = "0";
    //
    return answer;
}