#include <stdio.h>
#include <string.h>

int Verifica(char c) {
    return (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int Q4(char *NC, char L, int pos) {
    if (NC[0] == '\0' || pos < 0 || pos >= strlen(NC) - 1) {
        return -1;
    }
    if (NC[pos] == L && Verifica(NC[pos + 1])) {
        return pos;
    }
    return Q4(NC, L, pos+1);
}
// QUAL O RESULTADO RETORNADO PELA FUNCAO Q4 NO CASO DE VOCE A INVOCAR PASSANDO O CONJUNTO DE ENTRADAS ABAIXO
// L = A ULTIMA LETRA (MINUSCULA) DO SEU ULTIMO SOBRENOME
// NC = SEU NOME COMPLETO EM LETRAS MINUSCULAS
// POS = 0
int main() {
    char nc[] = "thales henrique euflauzino dos santos";
    char L = 's'; 
    int pos = 0;
    int resultado = Q4(nc, L, pos); 
    printf("Resultado: %d\n", resultado);
    return 0;
}
