#include <stdio.h>

int main(void) {
int mat[4]= {6, 2, 3, 4}, *p, x;
p = mat;
printf("%d\n", *p);
p = mat + 1;
printf("%d\n", *p);
x = (*mat);
printf("%d", x);
}