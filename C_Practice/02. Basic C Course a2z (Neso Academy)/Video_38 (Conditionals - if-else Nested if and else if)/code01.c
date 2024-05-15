
#include<stdio.h>
int main(){

    int n = 4;
    if (n != 4)
        printf("n is not 4");
    else   
        printf("n is 4");
    return 0;
}

// if there is a n single statement immidiate after if statement 
// we can avoid {}
// but this only will work for single statement immidiate after the if statement

// Same Code

// #include<stdio.h>
// int main(){

//     int n = 4;
//     if (n != 4){
//         printf("n is not 4");
//     }else{   
//         printf("n is 4");
//     }
//     return 0;
// }