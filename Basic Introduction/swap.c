#include <stdio.h>

int main() {
    double first,second,temp;
    printf("Enter first number:");
    scanf("%lf",&first);
    printf("Enter second number");
    scanf("%lf", &second);
    temp=first;
    first=second;
    second=temp;
    printf("first number after swap:%lf\n second number after swap:%lf",first,second);
    return 0;
};
