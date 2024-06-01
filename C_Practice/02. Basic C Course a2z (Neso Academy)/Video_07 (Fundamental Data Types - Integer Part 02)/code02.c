#include<stdio.h>
#include<limits.h>
int main(){

    int default_signed_var1 = INT_MIN;
    int default_signed_var2 = INT_MAX;
    printf("Range of Default (4 byte) Signed variable: %d to %d.\n", default_signed_var1, default_signed_var2);
    
    printf("\n");
    
    unsigned int default_unsigned_var1 = 0;
    unsigned int default_unsigned_var2 = UINT_MAX;
    printf("Range of Default (4 byte) unSigned variable: %u to %u.\n", default_unsigned_var1, default_unsigned_var2);
    
    printf("\n");
    
    int short short_signed_var1 = SHRT_MIN;
    int short short_signed_var2 = SHRT_MAX;
    printf("Range of short (2 byte) signed variable: %d to %d.\n", short_signed_var1, short_signed_var2);
    
    printf("\n");
    
    unsigned short int short_unsigned_var1 = 0;
    unsigned short int short_unsigned_var2 = USHRT_MAX;
    printf("Range of short (2 byte) unSigned variable: %u to %u.\n", short_unsigned_var1, short_unsigned_var2);
    
    printf("\n");
    
    int long long_signed_var1 = LONG_MIN;
    int long long_signed_var2 = LONG_MAX;
    printf("Range of long (4 byte) Signed variable: %ld to %lu.\n", long_signed_var1, long_signed_var2);
    
    printf("\n");
    
    unsigned long int long_unsigned_var1 = 0;
    unsigned long int long_unsigned_var2 = ULONG_MAX;
    printf("Range of long (4 byte) unSigned variable: %lu to %lu.\n", long_unsigned_var1, long_unsigned_var2);
    
    printf("\n");

    int long long long_long_signed_var1 = LLONG_MIN;
    int long long long_long_signed_var2 = LLONG_MAX;
    printf("Range of long_long (8 byte) Signed variable: %lld to %lld.\n", long_long_signed_var1, long_long_signed_var2);
    
    printf("\n");
    
    unsigned long long int long_long_unsigned_var1 = 0;
    unsigned long long int long_long_unsigned_var2 = ULLONG_MAX;
    printf("Range of long_long (8 byte) unSigned variable: %llu to %llu.\n", long_long_unsigned_var1, long_long_unsigned_var2);
    
    return 0;
}