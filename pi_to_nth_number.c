/*A simple program to print the value of Pi with user specified digits*/
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned digit;
    printf("Value of Pi up to which digit?: ");
    scanf("%d", &digit);
    printf("Pi up to %dth decimal digit is : %.*f\n", digit, digit, M_PI);
    return 0;
}
