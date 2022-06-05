#include <stdio.h>
int main(int argc, char* argv[]) 
{
  int a = 45; int b = 22;
  int *p = &a;
  int *q = NULL;
  printf("%d",*p);
  p = &b;
  printf("\n%d",*p);
}
