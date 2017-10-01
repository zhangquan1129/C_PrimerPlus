/*************************************************************************
	> File Name: bases.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct  1 23:47:54 2017
 ************************************************************************/

#include<stdio.h>

int main(void)
{
  int x = 100;
  printf("dec = %d: octal = %o : hex = %x\n", x, x, x);
  printf("dec = %d: octal = %#o : hex = %#x\n", x, x, x);
  return 0;
}
