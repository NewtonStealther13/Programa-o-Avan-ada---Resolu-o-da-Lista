#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gc/gc.h>
#include <time.h>

int main(void)
{

    int i;
    const int size = 10000000;
    clock_t t1, t2;

    t1 = clock();
    GC_INIT();
    for (i = 0; i < size; ++i){
        int **p = GC_MALLOC(sizeof(int));
    }
    t1 = clock() - t1;
    printf("%f ms", ((float)t1)/(CLOCKS_PER_SEC/1000));

    t2 = clock();
    for (i = 0; i < size; ++i){
        int **q = malloc(sizeof(int));
    free(q);
    }

    t2 = clock() - t2; 
    printf("%f ms", ((float)t2)/(CLOCKS_PER_SEC/1000));

    return 0;
}
