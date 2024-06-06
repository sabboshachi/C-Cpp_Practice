#include<stdio.h>
double volume(double s1, double s2, double s3); // Proper way to declare function prototype

int main(){
    double vol;
    vol = volume(12.2, 5.97, 9.03); // if we do any changes in the number of the parameters 
    // error will occur as only and only 3 parameters are allowed

    // vol = volume(12.2, 5.97, 9.03, 6.78); // ERROR

    printf("Volume is %f", vol);
    return 0;
}

// Compute the volume of a cube

double volume(double s1, double s2, double s3){
    return s1*s2*s3;
}