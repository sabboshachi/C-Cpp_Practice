#include <iostream> 

using namespace std;

int main(){
    int sixty = 60; 
    int negativeValue = -80; 

    float number = 90.33; 
    double number_2 = 80.5555555;

    // Addition
    float sum = sixty + number + number_2 + 100; 
    cout << sum; // Output: 330.88650
    // "cout" function comes from <iostream> library 

    // Subtraction
    int sub = sixty - 10;
    cout << sub; // Output: 50

    // Multiply
    int mul = sixty * 100;
    cout << mul; // Output: 6000

    // Division
    int div = sixty / 6;
    cout << div; // Output: 10

return 0;
}