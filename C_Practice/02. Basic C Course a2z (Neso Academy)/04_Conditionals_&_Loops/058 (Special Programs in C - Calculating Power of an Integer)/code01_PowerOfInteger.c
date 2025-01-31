#include<stdio.h>
int main(){
    int base = 3, exponent = 5, result = 1, expo;
    double resultNeg=1.0;

    // printf("Enter the base: ");
    // scanf("%d", &base);
    // printf("Enter the exponent: ");
    // scanf("%d", exponent);

    expo = exponent;
    if (exponent > 0){
        while(exponent != 0){
            result = result*base;
            exponent--;
        }
        printf("%d to the power %d is %d", base, expo, result);
    }
    else if(exponent < 0){
        while(exponent != 0){
            resultNeg = resultNeg * (1.0/base);
            exponent++;
        }
        printf("%d to the power %d is %.10f", base, expo, resultNeg);
    }
    else{
        printf("The result is 1 as the expontent in 0.");
    }
    return 0;
}