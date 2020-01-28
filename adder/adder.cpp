#include "adder.hpp"

void adder(int in1, int in2, int in3, int *out) {
//#pragma HLS INTERFACE ap_ctrl_none port=return
//#pragma HLS INTERFACE ap_none port=in3
//#pragma HLS INTERFACE ap_none port=in2
//#pragma HLS INTERFACE ap_none port=in1
#pragma HLS INTERFACE axis port=in1
#pragma HLS INTERFACE axis port=in2
#pragma HLS INTERFACE axis port=in3
#pragma HLS INTERFACE axis port=out

    int sum;

    sum = in1 + in2 + in3;
    *out = sum;
}
