#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - use nested if_else to check is random number
 *is positive/0/negative
 *
 * Return: Always(0)
 * betty style doc for function main goes there
 */
void positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);

}
