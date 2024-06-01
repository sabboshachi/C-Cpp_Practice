#include<stdio.h>
#include<limits.h>
int main(){

    int default_signed_var1 = INT_MIN;
    int default_signed_var2 = INT_MAX;
    printf("Range of Default Signed variable: %d to %d.\n", default_signed_var1, default_signed_var2);
    
    printf("\n");
    
    unsigned int default_unsigned_var1 = 0;
    unsigned int default_unsigned_var2 = UINT_MAX;
    printf("Range of Default unSigned variable: %u to %u.\n", default_unsigned_var1, default_unsigned_var2);
    
    printf("\n");
    
    int short_signed_var1 = SHRT_MIN;
    int short_signed_var2 = SHRT_MAX;
    printf("Range of short signed variable: %d to %d.\n", short_signed_var1, short_signed_var2);
    
    printf("\n");
    
    unsigned int short_unsigned_var1 = 0;
    unsigned int short_unsigned_var2 = USHRT_MAX;
    printf("Range of short unSigned variable: %u to %u.\n", short_unsigned_var1, short_unsigned_var2);
    
    printf("\n");
    
    int long_signed_var1 = LONG_MIN;
    int long_signed_var2 = LONG_MAX;
    printf("Range of long Signed variable: %ld to %lu.\n", long_signed_var1, long_signed_var2);
    
    printf("\n");
    
    unsigned int long_unsigned_var1 = 0;
    unsigned int long_unsigned_var2 = ULONG_MAX;
    printf("Range of long unSigned variable: %lu to %lu.\n", long_unsigned_var1, long_unsigned_var2);
    
    printf("\n");

    int long_long_signed_var1 = LLONG_MIN;
    int long_long_signed_var2 = LLONG_MAX;
    printf("Range of long_long Signed variable: %lld to %lld.\n", long_long_signed_var1, long_long_signed_var2);
    
    printf("\n");
    
    unsigned int long_long_unsigned_var1 = 0;
    unsigned int long_long_unsigned_var2 = ULLONG_MAX;
    printf("Range of long_long unSigned variable: %llu to %llu.\n", long_long_unsigned_var1, long_long_unsigned_var2);
    
    return 0;
}