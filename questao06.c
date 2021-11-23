int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco\n");
for(i = 0 ; i <= 4 ; i++){
printf("i = %d\t",i);
printf("vet[%d] = %.1f\t",i, vet[i]);
printf("*(f + %d) = %.1f\t",i, *(f+i));
printf("&vet[%d] = %X\t",i, &vet[i]);
printf("(f + %d) = %X\t",i, f+i);
printf("\n");
}
}
