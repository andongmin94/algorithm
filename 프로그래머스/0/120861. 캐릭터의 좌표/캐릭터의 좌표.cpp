#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    //
    for (const auto& e : keyinput)
    {
        if (e == "left" && board[0] / 2 * (-1) < answer[0]) answer[0]--;
        if (e == "right" && board[0] / 2 > answer[0]) answer[0]++;
        if (e == "up" && board[1] / 2 > answer[1]) answer[1]++;
        if (e == "down" && board[1] / 2 * (-1) < answer[1]) answer[1]--;
    }
    //
    return answer;
}