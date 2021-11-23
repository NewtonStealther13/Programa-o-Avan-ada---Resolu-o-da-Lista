#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t
void crescente (int n){
  float *x;
  int i, j;
  float aux;
  x = malloc(n*sizeof(float));
  for(i=0; i<n; i++){
    printf("Escreva o número %d ", i+1);
    printf("\n");
    scanf("%f", &x[i]);
  }
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(x[i] > x[j]){
        aux = x[i];
        x[i] = x[j];
        x[j] = aux;
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%f, ", x[i]);
  }
  free(x);
}
int main(void) {
  clock_t t; //variável para armazenar tempo
  int n;
  printf("Digite a quantidade de números que deseja ordenar: \n");
  scanf("%d", &n);
  //Verificando tempo de execução da funçaõ de ordenação
  t = clock(); //Armazena o tempo
  crescente(n); 
   t = clock() - t; //tempo final - tempo inicial
   printf("Tempo de Execução = %f ms", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
  return 0;
}