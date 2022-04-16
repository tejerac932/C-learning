#include <stdio.h>

int main() {
    double c, y, love;

    printf("What would like to multiply:");
    scanf("%lf %lf", &c, &y);
    
    love= c * y;

    printf("%lf x %lf = %.4lf", c, y, love);
}