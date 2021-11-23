#include <stdio.h>

int main(void) {
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
printf("%d \n", p == &i);
printf("%d \n", *p - *q);
printf("%d \n", **&p);
printf("%f \n", 3 - (double)*p/(*q) + 7);

  return 0;
}