#include<stdio.h>

void minMax(int a[], int a_len, int *min, int *max){
    *min = *max = a[0];
    int i;
    for(i=1; i<a_len;i++){
        if (a[i]>*max)
        {
            *max = a[i];
        }
        if (a[i]<*min)
        {
            *min = a[i];
        }
        
        
    }
}

int main(){
    int a[] = {12, 12, 15, 14, 16, 18, 14, 16, 32, 1547, 154, 589, 658, 452, 256, 584, 58, 5, 884, 8, 056, 22, 36, 2};
    int min, max;
    int a_len = sizeof(a)/ sizeof(a[0]);
    minMax(a, a_len, &min, &max); // arguments are array, an integer, and address of min and max variable
    printf("Min: %d \nMax: %d", min, max);
    return 0;
}