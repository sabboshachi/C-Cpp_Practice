// There is a situation that we will encounter quite frequently that is at first unsettling. 
// Some “character-based” functions have a return type of int rather than char.

// For example, getchar() function’s return type is int, not char. 
// The reason for this found in the fact that C vary clearly handles 
// the conversion of characters to integers and integers back to characters. 
// There is no loss of information. 

// Following program is an example:

#include<stdio.h>
int get_a_char(void);

int main(){
    char ch;
    ch = get_a_char();
    printf("The character is %c",ch);
    return 0;
}

int get_a_char(void){
    return 'a';
}

// When get_a_char() returns, it elevates the character ‘a’ to an integer by adding 
// a high order byte containing zeros. When this value is assigned to ch in main(), 
// the high-order byte is removed. One reason to declare functions like get_a_char() 
// as returning an integer instead of a character is to allow various error values 
// to be returned that are intentionally outside the range of a char