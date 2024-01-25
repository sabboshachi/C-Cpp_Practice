#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int table;
    int multiplyer =1;
    
    cout << "Enter a number: ";
    cin >> table;

    while (multiplyer <= 10 ){
        cout<< table << " x " << multiplyer << " = " << table*multiplyer << endl;
        multiplyer++;
    }
    return 0;
}