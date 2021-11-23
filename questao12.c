#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void produto(float x, float y){
float z = x*y;
printf("%fx%f = %f", x, y, z);
}
void razao(float x, float y){
float z = x/y;
printf("%f/%f = %f", x, y, z);
}
void exponencial(float x, float y){
float z = pow(x, y);
printf("%f^%f = %f", x, y, z);
}
int main(){
float x = 2;
float y = 3;
int i;
int opcao;
void (*p[3])(float, float) = {produto, razao, exponencial};
for(i = 0; i < 3; i++){
  opcao = i;
  (*p[opcao])(x,y);
  printf("\n");
}
return 0;
}