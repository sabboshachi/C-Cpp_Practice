#include<stdio.h>
int main(){
    int i;
    for (i = 0; i < 20; i++){
        switch (i) // first i = 0
        {
        case 0: // case condition matches so now i = 0 + 5 = 5
            i += 5; // as there is not break statement here so the next case will automatically execute
        case 1:
            i += 2; // here i = 5 + 2 = 7
        case 5: 
            i += 5; // here i = 7 + 5 = 12
        default:
            i += 4; // here i = 12 + 4 = 16
        }
        printf("%d ",i); // so for first loop i = 16
    }
}

// now i = 16 will go to for loop 
// due to i++ its value will be incrased i = 16 + 1 = 17
// i = 17 satisfies the switch condition but don't satisfy the case condition 
// so directly the default condition will be executed
// i = 17 + 4 = 21 thus 21 is printed 
// again increment value and cheaking for loop the condition breaks so 
// the final result is 16 21