// This program requests input of two strings, then demonstrates the four string functions with them. 
// 01. how long the strings are
// 02. compare the strings
// 03. concatenate str2 to end of strl if there is enough room
// 04. copy str2 to strl

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    int i;

    printf("Enter the first string: \n");
    gets(str1);

    printf("\nEnter the second string: \n");
    gets(str2);

    // how long the strings are
    printf("%s is %d charecter long\n", str1, strlen(str1));
    printf("%s is %d charecter long\n", str1, strlen(str2));

    // compare the strings
    i = strcmp(str1, str2);
    if(i == 0){
        printf("%s and %s are equal.", str1, str2);
    }else{
        printf("%s and %s are not equal.", str1, str2);
    }

// It relurns zero if the strings are the same. It returns less than zero if s1 is less than s2 and greater than zero if s1 is greater than s2. The strings 
// are compared lexicographically; that is, in dictionary order. Therefore, a string is less than another when it would appear before the other in a 
// dictionary. A string is greater than another when it would appear after the other. The comparison is not based upon the length of the string. 
// Also, the comparison is case-sensitive, lowercase characters being greater than uppercase


    // concatenate str2 to end of strl if there is enough room
    if(strlen(str1) + strlen(str2) < 100){
        strcat(str1, " ");
        strcat(str1, str2);
        printf("\n%s", str1);
    }else{
        printf("The concatination cannot be done as it exit the limit.");
    }

    // copy str2 to strl
    strcpy(str1, str2);
    printf("\n%s",str1);










    return 0;
}