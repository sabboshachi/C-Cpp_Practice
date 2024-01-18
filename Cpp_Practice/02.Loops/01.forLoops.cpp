#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int i, Num1, Num2;
    
    // Print 1 to 10 Loop
    for(i = 0; i <= 10; i++) // initial value, condition, increment
    {
        cout << i << endl;
    }

    // Reverse Loop that print 10 to 1
    for(i = 10; i >= 0; i--) // initial value, condition, increment
    {
        cout << i << endl;
    }
    
    cout << "\n";
    
    // Taking user inputs first and last digit to create a list
    cout << "Enter the first number of the series: ";
    cin >> Num1;

    cout << "Enter the last number of the series: ";
    cin >> Num2;

    for(i = Num1; i <= Num2; i++) // initial value, condition, increment
    {
        cout << i << endl;
    }

    return 0;
}