#include <stdio.h>
#include <stdlib.h>
long Q5(char *NC, int R){
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for (int i = 0; i < R; i++) fprintf(A, "%s", NC); fclose(A);

    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A); fclose(A); //remove("Saida.txt");
    return r;
}
// QUAL O RESULTADO RETORNADO PELA FUNCAO Q5 NO CASO DE VOCE A INVOCAR PASSANDO O CONJUNTO DE PARAMETROS ABAIXO
// NC = SEU NOME COMPLETO EM LETRAS MINUSCULAS
// R = O ULTIMO DIGITO DA SUA MATRICULA ACRESCIDO DE 3
int main(){
    char nc[] = "thales henrique euflauzino dos santos";
    int R = 11;
    long r = Q5(nc, R);
    printf("resultado: %ld \n", r);
}