#include "adder.hpp"

int adder(int in1, int in2, int in3) {
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE ap_none port=in3
#pragma HLS INTERFACE ap_none port=in2
#pragma HLS INTERFACE ap_none port=in1

    int sum;

    sum = in1 + in2 + in3;

    return sum;
}
