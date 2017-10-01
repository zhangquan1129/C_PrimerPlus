/*************************************************************************
	> File Name: nogood.c
	> Author: 
	> Mail: 
	> Created Time: Sun Oct  1 23:10:26 2017
 ************************************************************************/

#include<stdio.h>

int main(void)
( // 程序段 使用"{}"
  int n, int n2, int n3;
  /** 这可以使用 int n, n2, n3; 
  * 或使用  int n;
  *         int n2;
  *         int n3;
  **/

  /** 注释要要正确结束 **/
  /* 该程序有多处错误，无法通过编译
  n = 5;
  n2 = n * n;
  n3 = n2 * n2;
  printf("n = %d, n sqr = %d, n cubed = %d\n", n, n2, n3)  // 要以;结尾

  return 0;
)
