#include<stdio.h>
#include<stlib.h>
#include "main.h"
/**
 * print_to_98 - print decompt
 *
 */



void print_to_98(int n);
{
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
