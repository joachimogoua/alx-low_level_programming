#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - dispalys if greater or less 
* Return: 0 if it runs ok 
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if ( n%10 > 5)
printf("the last  digit of %d is %d and is greater than 5",n,n%10);
else if ( n%10 == 0 )
printf("the last  digit of %d is %d and is 0",n,n%10);
else
printf("the last  digit of %d is %d and is less than 6",n,n%10);
	return (0);
}
