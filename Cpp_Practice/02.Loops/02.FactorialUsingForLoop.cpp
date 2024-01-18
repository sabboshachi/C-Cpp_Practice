#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int i, j=1, factorialNumber;

    cout << "Enter the number you want factorial: ";

    cin >> factorialNumber;

    for(i = 1; i <= factorialNumber; i++){
        j = j*i;
    }

    cout << "The Factorial of your given number is: " << j;


return 0;    
}