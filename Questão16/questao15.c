#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

float compare(float *ordem2, int n){
    float aux;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(ordem2[i] > ordem2[j]){
                aux = ordem2[i];
                ordem2[i] = ordem2[j];
                ordem2[j] = aux;
            }
        }
    }
    return *ordem2;
}

float crescente(float (*px)(float *, int), float *ordem2){

	int n;
    printf("Digite o número de elementos que deseja ordenar: ");
    scanf ("%i", &n);
    ordem2 = (float*) malloc(n*sizeof(float));
    printf("\n");

        for(int i = 0; i < n; i++){
            printf("Digite o elemento %d: \n", i+1);
            scanf("%f", &ordem2[i]);
        }
    px(ordem2, n);

    printf("A ordem crescente dos valores informados segue abaixo: \n");
    for(int i =0; i < n; i++){
            printf("%f  ", ordem2[i]);
    }
    free(ordem2);
    return 0;
}

int main () {
    clock_t t; //variável para armazenar tempo
    float *ordem1;
    //Verificando o tempo de execução da função crescente
    t = clock(); //Armazena o tempo
    crescente(compare, ordem1);
    t = clock() - t; //tempo final - tempo inicial
    printf("Tempo de Execução = %f ms", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
    return 0;
}