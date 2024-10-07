// Find if the parking spot is available or not from a given array where two car cannnot be parked in adjacent places 

#include<stdio.h>
#include<stdbool.h>

int parkingCars(int arr[], int length, int n){
    int i, count = 0;
    
    for(i=0; i<length; i++){  
        if(arr[i]==0 && i == 0){
            if(arr[i+1] == 0){  
            count = count + 1;
            }
        }
        else if(arr[i]==0 && i == length-1){
            if(arr[i-1] == 0){  
            count = count + 1;
            }
        }
        else if(arr[i]==0){
            if(arr[i-1] == 0 && arr[i+1] == 0){  
            count = count + 1;
            }
        }
    }

    if(count >= n){
        return true;  
    } else {
        return false;
    }
}

int main(){
    int carArray[] = {0, 0, 1, 0, 1, 0, 0};
    int n = 1; 
    int length = sizeof(carArray) / sizeof(carArray[0]);

    int result = parkingCars(carArray, length, n);
    
    if(result){
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}

