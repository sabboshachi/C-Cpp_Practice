
#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){

    // counts how many 2 devides 100
    int x = 100, count = 0;
    while(x % 2 == 0)
    {
        // we can write x /= 2 
        x = x / 2;
        count ++;
    }

    // find out the highsat number which is power of 2 and less than 1000
    int a = 1, sum=1;
    while (a * 2 < 1000)
    {
        sum = a * 2;
        a = a * 2;
    }
    cout << "The number is: " << sum << endl;

    // same thing using for loop. Note there is a semicolon after the for loop. at the end of loop, you will find desired value in x
    for (x=1; x*x<1000; x=x*2){
        cout << "The number is: " << x << endl;
    }
    







    return 0;
}