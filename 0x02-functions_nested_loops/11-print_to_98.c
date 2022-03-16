#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_to_98 - print decompt
 *
 */



void print_to_98(int n)
{
  int i;
  if (n <= 98)
    {
      for (i = n ; i < 98 ; i++)
	{
	  printf("i, ");
	}
    }
  if (n > 98)
    {
      for (i = n ; i >= 98 ; i--)
	{
	   printf("i, ");
	}
    }
  return ( );
}
