#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string Name; // Declear a variable where the input will be stored

    int a;
    int b;

    cout << "Enter tour name: ";
    cin >> Name; // This command will take input and store it in the Name variable

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b";
    cin >> b;

    cout << a+b;

    cout << "Your name is: " << Name;

return 0;
}