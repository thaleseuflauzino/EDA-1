#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("\n%s\n\t%s\n\t\t%s\n", "um", "dois", "tr�s");
    system("pause");
    return 0;
}