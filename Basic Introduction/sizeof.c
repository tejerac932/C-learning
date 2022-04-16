#include <stdio.h>

int main() {
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    long longint;
    long long longlognint;
    long double longdouble;

    printf("normal\n");
    printf("size of int: %zu bytes\n",sizeof(inttype));
    printf("size of float: %zu bytes\n", sizeof(floattype));
    printf("size of double: %zu bytes\n", sizeof(doubletype));
    printf("size of char: %zu bytes\n", sizeof(chartype));
    
    printf("long\n");
    printf("size of long int: %zu bytes\n",sizeof(longint));
    printf("size of long long int: %zu bytes\n",sizeof(longlognint));
    printf("size of long double: %zu bytes\n",sizeof(longdouble));
    return 0;
}