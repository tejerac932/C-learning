#include <stdio.h>

int main () {
    float dividend, divisior, quotient;
    int remainder;
    printf("Enter dividend:" );
    scanf("%f",&dividend);
    printf("Enter Divisor:");
    scanf("%f", &divisior);

    quotient=dividend/divisior;
    remainder=(int)dividend%(int)divisior;

    printf("Quotient: %f Remainder: %d", quotient, remainder);
    return 0;
}