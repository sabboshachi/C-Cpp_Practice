#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string Name; // Declear a variable where the input will be stored

    int a;
    int b;

    cout << "Enter your name: ";
    cin >> Name; // This command will take input and store it in the Name variable
    cout << "Your name is " << Name << endl; // "endl" means end of line


    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "The Sum of a and b is: " << a+b;

return 0;
}