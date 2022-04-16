#include <stdio.h> //standard library

int main(){
    int a[15]={1};
    int b[15]={};
    for(int loop=0; loop<15; loop++){
        b[loop]=a[loop];
    }
    b[1] = 3;
    printf("a[1] = %d\n",a[1]);
    printf("b[1] = %d",b[1]);
    return 0;
}