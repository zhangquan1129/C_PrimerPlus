/*************************************************************************
	> File Name: rhodium.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct  1 23:29:15 2017
 ************************************************************************/

#include<stdio.h>

int main(void)
{
  float weight;   /* 用户体重 */
  float value;

  printf("Are you worth your weight in rhodium?\n");
  printf("Lets check it out.\n");
  printf("Please enter your weight in pounds: ");
  
  /* 用户输入 */
  scanf("%f", &weight);

  value = 770 * weight * 14.5833;
  printf("Your weight in rhodium is worth $%.2f.\n", value);
  printf("You are easily worth that! If rhodium prices drop. \n");
  printf("eat more to maintain your value.\n");

  return 0;
}
