/*************************************************************************
	> File Name: print1.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct  1 23:40:34 2017
 ************************************************************************/

#include<stdio.h>

int main(void)
{
  int ten = 10;
  int two = 2;
  printf("Doing it right: ");
  printf("%d minus %d is %d\n", ten, 2, ten - two);
  printf("Doing it wrong: ");
  printf("%d minus %d is %d\n", ten); // 忘掉了两个值

  return 0;
}
