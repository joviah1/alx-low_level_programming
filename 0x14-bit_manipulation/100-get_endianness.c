#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
        unsigned int num = 0x01020304;

        unsigned char *ptr = (unsigned char *)&num;

        return (*ptr == 1 ? 1 : 0);
}
int main(void)
{
        int n;

        n = get_endianness();
        if (n != 0)
        {
                printf("Little Endian\n");
        }
        else
        {
                printf("Big Endian\n");
        }
        return (0);
}
