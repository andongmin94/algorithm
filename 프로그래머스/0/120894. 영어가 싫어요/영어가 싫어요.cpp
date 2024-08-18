#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    //
    string s = "";
    for (const auto& e : numbers)
    {   
        s += e;
        if (s == "zero")
        {
            answer *= 10;
            s = "";
        }
        if (s == "one")
        {
            answer *= 10;
            answer += 1;
            s = "";
        }
        if (s == "two")
        {
            answer *= 10;
            answer += 2;
            s = "";
        }
        if (s == "three")
        {
            answer *= 10;
            answer += 3;
            s = "";
        }
        if (s == "four")
        {
            answer *= 10;
            answer += 4;
            s = "";
        }
        if (s == "five")
        {
            answer *= 10;
            answer += 5;
            s = "";
        }
        if (s == "six")
        {
            answer *= 10;
            answer += 6;
            s = "";
        }
        if (s == "seven")
        {
            answer *= 10;
            answer += 7;
            s = "";
        }
        if (s == "eight")
        {
            answer *= 10;
            answer += 8;
            s = "";
        }
        if (s == "nine")
        {
            answer *= 10;
            answer += 9;
            s = "";
        }
    }
    //
    return answer;
}