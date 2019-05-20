//SOP.c Multiplies two arrays, each array with 40 numbers

#include <stdio.h>
int dotp(short *m, short *n, int count);

short a[40] = {40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
short x[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
int y = 0;

int main(void)
{
  y = dotp(a, x, 40);

  return 0;
}

int dotp(short *m, short *n, int count)
{
  int i, product, sum = 0;
  for (i=0; i < count; i++)
  {
    product = m[i] * n[i];
    sum += product;
  }
  return(sum);
}
