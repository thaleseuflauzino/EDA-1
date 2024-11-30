#include <stdio.h>
#include <stdlib.h>

int Q1(long long int valor) {
    int *ptr, *pnumeros, pn = valor % 10, pp, psoma = 0;
    if (pn < 2) pn = 5 - pn;
    pnumeros = (int*) malloc(pn * sizeof(int));
    ptr = pnumeros;
    for (pp = 0; pp < pn; pp++) {
        *ptr = valor % 10; 
        valor = valor / 10; 
        ptr++;
    }
    for (pp = 0; pp < pn; pp++) { 
        if (pnumeros[pp] % 2 == 1) {
            psoma = psoma + pnumeros[pp];
        }
    }
    free(pnumeros);
    return psoma;
}
// QUAL O RESULTADO RETORNADO PELA FUNCAO Q1 NO CASO DE VOCE INVOCAR PASSANDO O NUMERO DE SUA MATRICULA COMO PARAMETRO? 
int main() {
    int matricula = 222006178;
    int x = Q1(matricula);
    printf("o resultado e: %d\n", x);
    return 0;
}
