// The Following program demostrates an old style forward declaration

#include<stdio.h>
double volume(); // old style declaration for valume as we are not defining the parameters

int main(void){
    double vol;
    vol = volume(12.2, 5.67, 9.03);
    printf("The Volume is: %f", vol);
    return 0;
}

// Compute the volme of a cube

double volume(double s1, double s2, double s3){
    return s1*s2*s3;
}

// Code runs well. So what is the problem here?
// The trouble is that the lack of full prototype will allow volume() 
// to be called using an incorrect type and/or number of arguments. 
// For example, given the preceding program the following will not generate 
// a compiler error message event though it is wrong.

// if we write 
// vol = volume(12.2, 5.67);

// Since the compiler has 
// not been given information 
// about volume()’s parameters it 
// won’t catch the fact that this call is wrong