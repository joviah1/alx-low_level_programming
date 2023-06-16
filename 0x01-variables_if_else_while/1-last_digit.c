#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - To print the last digit of the number stored in the variable n
 * its greater than 5 and less than 6, or 0
 *
 * Return: Always 0.
 */
int main(void)
{
    srand(time(0));

    int n = rand() - RAND_MAX / 2;

    int lastDigit = n % 10;

    printf("The string Last digit of %d is ", n);

    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    printf("should be betty compliant\n");

    return 0;
}
