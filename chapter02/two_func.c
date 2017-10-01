/*************************************************************************
	> File Name: two_func.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct  1 23:04:18 2017
 ************************************************************************/

#include<stdio.h>
void butler(void);

int main(void)
{
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
  return 0;
}

void butler(void)
{
  printf("You rang, sir?\n");
}
