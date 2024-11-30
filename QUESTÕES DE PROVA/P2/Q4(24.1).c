#include <stdio.h>

int Q4(char *vet, int count){
    int pcont = 0;
    char aux;
    for (int i = 0; i < count; i++)
        for (int j = i+1; j < count; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i]; vet[i] = vet[j]; vet[j] = aux;
                pcont++;
            }
        }
    return pcont;
}
// Qual o valor de R?
// Qual o valor de nome?
// Qual tipo de ordenacao da funcao q4?

int main(){
    char nc[] = "thales";
    int res = Q4(nc, 6); // primeiro nome, qtd de letras 1o nome;
    printf("\n\nresposta = %d\n\nnc = %s\n\n", res, nc);
}