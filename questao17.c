#include<stdio.h>
#include<stdlib.h>

void soma(int *vetor1, int *vetor2, int *vetor3, int n){
   for(int i=0; i<n; i++){
    vetor3[i] = vetor1[i] + vetor2[i];
   }
   printf("Resultado da soma dos vetores abaixo: \n");
  for(int i=0; i<n; i++){
    printf("%d  ", vetor3[i]);
}
}

int main(void){
  int x, i;
  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &x);
  int *a, *b, *c;
  a = malloc(x * sizeof(int*));
  b = malloc(x * sizeof(int*));
  c = malloc(x * sizeof(int*));
  for(i = 0; i < x; i++){
    printf("Digite o valor %d do primeiro vetor: \n", i + 1);
    scanf("%d", &a[i]); 
  }

  for(i=0; i<x; i++){
    printf("Digite o valor %d do segundo vetor: \n", i + 1);
    scanf("%d", &b[i]);
  }
  soma(a, b, c, x);
  free(c);
  free(a);
  free(b);

  return 0;
}