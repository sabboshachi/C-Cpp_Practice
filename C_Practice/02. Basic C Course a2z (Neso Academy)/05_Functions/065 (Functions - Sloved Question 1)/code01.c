#include<stdio.h>
int func(int num);
int main(){
    int result;
    result = func(435);
    printf("%d", result);
}
int func(int num){
    int count = 0;
    while (num){
        count ++;
        num >>= 1;
    }
    return(count);
}

// 435 in binary 110110011

// for num >> 1 
// step_1:  110110011 -> count = 1;
// step_2:  011011001 -> count = 2;
// step_3:  001101100 -> count = 3;
// step_4:  000110110 -> count = 4;
// step_5:  000011011 -> count = 5;
// step_6:  000001101 -> count = 6;
// step_7:  000000110 -> count = 7;
// step_8:  000000011 -> count = 8;
// step_9:  000000001 -> count = 9;
// step_10: 000000000 -> loop will be terminated 

// and so the value of count is 9;