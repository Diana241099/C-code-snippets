#include <stdio.h> 

//making the full adder function


void full_adder(unsigned int bit1, unsigned int bit2, unsigned int carry_in,
                unsigned int *sum, unsigned int *carry_out) {
    unsigned int half_sum = bit1 ^ bit2;
    *sum = half_sum ^ carry_in; //xor
    *carry_out = (bit1 & bit2) | (carry_in & half_sum); //calculating a carry
}

void add_binary(unsigned int num1[4], unsigned int num2[4], unsigned int result[4]) {
    unsigned int carry = 0;

    //telling C to go from right to left while adding
    for (int col = 3; col >= 0; col--) { //where -- is a decrement operator

        //passing the current bits and the carry
        //&result[col] addresses the current 'result' slot and makes changes there
        //&carry to overwrite carry with carry_out, making it ready for the iteration
        full_adder(num1[col], num2[col], carry, &result[col], &carry);
    }
}

//displaying numbers
int main(void) {
    unsigned int num1[4] = {0, 0, 1, 1};
    unsigned int num2[4] = {0, 0, 1, 1};
    unsigned int num3[4] = {0, 0, 1, 1};

    //places to hold an intermediate sum and final
    unsigned int temp_sum[4];
    unsigned int final_result[4];

    //adds the first 2 numbers
    add_binary(num1, num2, temp_sum);
    //adds the third one to the sum of the two, stores in final result
    add_binary(temp_sum, num3, final_result);


    //print the result
    printf("Result: ");
    for (int col = 0; col < 4; col++) {
        printf("%u", final_result[col]);
    }
    printf("\n");

    return 0;
}
