#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    //
    answer = board.size() * board.size();
    
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 1)
            {
                int ni[3] = {-1, 0, 1};
                int nj[3] = {-1, 0, 1};
                
                for (auto nie : ni)
                {
                    for (auto nje : nj)
                    {
                        if (i + nie < 0 || i + nie >= board.size()) continue;
                        if (j + nje < 0 || j + nje >= board.size()) continue;
                        
                        if (board[i + nie][j + nje] == 0) board[i + nie][j + nje] = 2;
                    }
                }
            }
        }
    }
    for (auto e : board)
    {
        for (auto e_ : e)
            if (e_ == 1 || e_ == 2) answer--;
    }
    //
    return answer;
}