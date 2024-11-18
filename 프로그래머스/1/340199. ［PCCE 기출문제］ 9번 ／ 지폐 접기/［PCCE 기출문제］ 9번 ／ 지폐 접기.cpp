#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    //
    if (wallet[0] < wallet[1]) swap(wallet[0], wallet[1]);
    while(true)
    {        
        if (bill[0] < bill[1]) swap(bill[0], bill[1]);
        if (bill[0] <= wallet[0] && bill[1] <= wallet[1]) break;
        
        bill[0] /= 2;
        answer++;
    }
    //
    return answer;
}