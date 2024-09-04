#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    //
    for(const auto& e : quiz)
    {
        istringstream iss(e);
        int num1, num2, result;
        char op, eq;
        
        if (iss >> num1 >> op >> num2 >> eq >> result)
        {
            bool correct = false;
            if (op == '+') correct = (num1 + num2 == result);
            else if (op == '-') correct = (num1 - num2 == result);
            
            answer.push_back(correct ? "O" : "X");
        }
        else answer.push_back("X");
    }
    //
    return answer;
}