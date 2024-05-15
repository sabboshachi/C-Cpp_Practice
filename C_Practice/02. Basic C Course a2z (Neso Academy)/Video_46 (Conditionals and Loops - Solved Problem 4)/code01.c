#include<stdio.h>
int main(){
    unsigned int i = 500;
    while(i++ != 0); // here this while has no body or statement to execute
    printf("%d",i); // i got an post increment after reaching 0 and meeting the condition so 
    // i will be 1 not 0
    return 0;
}

// unsigned i (4 byte) means range 0 to (2^32 -1) = 4294967295
// i = 500, 501, 502, ... ... ... ... ... 4294967295
// when i reaches to 4294967295 then because of i++, it comes back again to 0
// As 0 not equal to 0 is FALSE therefore we come outside of the while loop
// After we come out ofthe loop, i will contain 1 beacause of post increment operator.
// Therefore, 1 will be printed on the screen.