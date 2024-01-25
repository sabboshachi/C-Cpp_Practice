#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int number = 0;

    bool check = false;

    cout << "How many times you want the loop to run: " ;
    cin >> number;

    while (number>=0 || check) // This condition will run only if both condition are satisfyed. But check is False so the loop won't run. 
    {
        cout<<number<<endl;
        number--;
    }

    // && 'and' operator
    // || 'or' operator
    
     
    return 0;
}