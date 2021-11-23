#include <stdio.h>
int main(void) {
char x[4] = {"1", "2", "3", "4"};
int a;
for(a = 0; a < 4; a++){
printf("%x\t", &x[a]);
}
printf("\n");
int x1[4] = {1, 2, 3, 4};
int i;
for(i = 0; i < 4; i++){
printf("%x\t", &x1[i]);
}
printf("\n");
float x2[4] = {1, 2, 3, 4};
int j;
for(j = 0; j < 4; j++){
printf("%x\t", &x2[j]);
}
printf("\n");
double x3[4] = {1, 2, 3, 4};
int k;
for(k = 0; k < 4; k++){
printf("%x\t", &x3[k]);
}
  return 0;
}
