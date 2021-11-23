#include <stdio.h>

int main(void) {
int pulo[5] = {0, 1, 2, 3,4};
printf("%d\n", *(pulo + 2));
printf("%d\n", pulo + 2);
printf("%d\n", *(pulo + 4));
printf("%d", pulo + 4);
return 0;
}