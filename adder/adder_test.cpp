#include <iostream>
#include <vector>

#include "adder.hpp"

int main() {
    int in1, in2, in3;
    int sum;
    bool pass = true;

    // ref output
    std::vector<int> refOutput(10);
    for (int i=0; i<10; i++)
        refOutput[i] = i + i + i;

    // 5 tests
    for (int i=0; i<10; i++) {
        //sum = adder(i, i, i);
        adder(i, i, i, &sum);
        std::cout << sum << "  " << refOutput[i] << std::endl;
        pass &= sum == refOutput[i]; 
    }

    // check
    if (pass) {
        std::cout << "--- pass ---\n";
        return 0;
    } else {
        std::cout << "--- fail --- \n";
        return 1;
    }

    return 0;
}
