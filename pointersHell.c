#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int n = 7;
  int *p;
  
  p = (int *)malloc(n*sizeof(int));
  
  printf("Size is: %p \n", p);
  printf("Ptr + n = %p \n", p + n);
  
  return 0;
}
