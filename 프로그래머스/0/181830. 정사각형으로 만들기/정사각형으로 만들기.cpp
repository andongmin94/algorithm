#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    //
    int row = arr.size();
    int col = arr[0].size();
    if (row > col)
    {
        for (auto& e : arr)
        {
            int n = row - col;
            while(n--) e.push_back(0);
        }
    }
    if (row < col)
    {
        int n = col - row;
        while(n--) arr.push_back(vector<int>(col, 0));
    }
    answer = arr;
    //
    return answer;
}