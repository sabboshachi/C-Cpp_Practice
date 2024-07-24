#include<stdio.h>
#include<string.h>

int main(){
    char str1[80],str2[80],str3[80];
    
    // Copy String
    strcpy(str1, "Sabboshachi Sarkar\n"); // strcpy(to, from);
    printf(str1);

    // Concatenation
    strcat(str2, "Sabboshachi");
    strcat(str2, " ");
    strcat(str2, "Sarkar");
    strcat(str2, "\n");
    printf("%s",str2);

    // Compare String
    printf("%d\n", strcmp(str1, str2));

    // String Length
    
    printf("%d", strlen(str1));

    

    return 0;

}