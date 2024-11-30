#include <stdio.h>

typedef struct {
    int id;
    int quantidade;
    float preco;
} TProduto;

typedef struct {
    int qtdeProdutos;
    TProduto *produtos;
} TEstoque;

int main() {
    TEstoque Estoque;
    alocaEstoque(&Estoque);
    incluirProdutos(&Estoque); 
    listarProdutos(&Estoque);
    desalocaEstoque(&Estoque);
    return 0;
}

void incluirProdutos(TEstoque *pEstoque) {
    for (int i = 0; i < pEstoque->qtdeProdutos; i++) {
        scanf("%d", &pEstoque->produtos[i].id);
        scanf("%d", &pEstoque->produtos[i].quantidade);
        scanf("%f", &pEstoque->produtos[i].preco);
    }
}