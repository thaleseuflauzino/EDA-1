#include <stdio.h>
#include <stdlib.h>

int Q1(char *Nome, int qtde) {
    int pc = 0;
    if (*Nome == '\0')
        return qtde;
    while (Nome[pc] != '\0')
        pc++;
    return Q1(Nome + 1, qtde + pc);
}
