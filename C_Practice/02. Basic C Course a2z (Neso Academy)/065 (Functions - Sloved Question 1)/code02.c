#include<stdio.h>
int func(int num);
int main(){
    int result;
    result = func(435);
    printf("%d", result);
}
int func(int num){
    int count = 2;
    while (num){
        count ++;
        num >>= 2;
    }
    return(count);
}

// 435 in binary 110110011

// for num >> 2 and count = 2
// step_1:  110110011 -> count = 3;
// step_2:  001101100 -> count = 4;
// step_3:  000011011 -> count = 5;
// step_4:  000000110 -> count = 6;
// step_5:  000000001 -> count = 7;
// step_6:  000000000 -> loop will be terminated 

// and so the value of count is 7;