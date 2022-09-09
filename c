/* Are you of legal age */

#include <stdio.h>

int main(void) 
{

  int a;

  printf("enter age:");
  scanf("%d", &a);

  if (a > +18)
  {
    printf("of age");
  }

  else
  {
    printf("underage");
  }

  return 0;
}
