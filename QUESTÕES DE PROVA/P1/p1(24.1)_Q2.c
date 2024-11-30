#include <stdio.h>
void Q2(char *str){
    int n = strlen(str);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            printf("str[j %d]: %c\n", j, str[j]);
            printf("str[i %d]: %c\n", j, str[i]);
            if (str[j] > str[i])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }    
        }  
    }
}
// CONSIDERE QUE UM PROGRAMA PRINCIPAL HA UMA VARIAVEL PN (VETOR DE CHAR) CONTENDO SEU PRIMEIRO NOME EM LETRAS MINUSCULAS. 
// QUAL O CONTEUDO DESTA VARIAVEL PN APOS A EXECUCAO DA FUNCAO Q2 NO CASO DE VOCE INVOCAR PASSANDO PN COMO PARAMETRO DE ENTRADA
int main() {
    char str[] = "thales";
    printf("String antes da ordenacao: %s\n", str);
    Q2(str);
    printf("String depois da ordenacao: %s\n", str);
    return 0;
}