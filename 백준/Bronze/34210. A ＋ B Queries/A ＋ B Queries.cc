#include "aplusb.h"

static std::vector<int> A_global, B_global;

void initialize(std::vector<int> A, std::vector<int> B) {
    A_global = A;
    B_global = B;
}

int answer_question(int i, int j) {
    return A_global[i] + B_global[j];
}