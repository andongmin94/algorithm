#include <bits/stdc++.h>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    // 이진수 문자열을 10진수 정수로 변환
    int i = stoi(bin1, nullptr, 2);
    int j = stoi(bin2, nullptr, 2);

    // 두 10진수 정수를 더함
    int sum = i + j;

    // 10진수를 이진수 문자열로 변환
    answer = bitset<128>(sum).to_string(); // bitset 크기를 128로 설정

    // 앞에 있는 0을 제거
    size_t pos = answer.find('1');
    if (pos != string::npos) {
        answer = answer.substr(pos);
    } else {
        answer = "0"; // 모든 비트가 0인 경우 "0"을 반환
    }

    return answer;
}