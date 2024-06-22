# include<stdio.h>
int fun(int n){
    if (n == 1){
        return 0;
    }
    else{
        return 1 + fun(n/2);
    }
}

int main(){
    printf("%d", fun(8));
    return 0;
}

// fun(8) --> return 1 + fun(4) --> return 1 + fun(2)  --> return 1 + fun(1) --> fun(1) = 0
//                                                                                     |
// printf(3)        (1 + 2)     <---       (1 + 1)    <---       (1 + 0)           <----

// Output: 3