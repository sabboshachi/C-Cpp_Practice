// How many times Hello World will be printed 

# include<stdio.h>
int main(){
    int i = -5;
    while (i <= 5)
    {
        if(i>=0)
            break;
        else{
            i++;
            continue;
        }
        printf("Hello World!");
    }
    return 0;
}

// i = -5
// continue;

// i = -4
// continue;

// i = -3
// continue;

// i = -2
// continue;

// i = -1
// continue;

// i = 0
// break;

// Here we can't execute the printf function in any iteration
// Thus the Hello World will be printed 0 times
