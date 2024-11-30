#include <stdlib.h>

typedef struct {
    int id;  //Código do produto
    int quantidade;  //Quantitativo do produto em estoque (QMP)
    float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
    int qtdeProdutos;  //Quantidade máxima de diferentes produtos
    TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

void alocaEstoque(TEstoque *pEstoque){
    scanf("%d", &pEstoque->qtdeProdutos);
    pEstoque->produtos = (TProduto *) malloc(pEstoque->qtdeProdutos * sizeof(TProduto));
}

void listarProdutos(TEstoque *Estoque){
    for (int i = 0; i < Estoque->qtdeProdutos; i++)
    {
        printf("ID: %d, Qt:%d, Preço: %.2f\n", Estoque->produtos[i].id, Estoque->produtos[i].quantidade, Estoque->produtos[i].preco);
    }
}

void desalocaEstoque(TEstoque *pEstoque){
    free(pEstoque->produtos);
    pEstoque->qtdeProdutos = 0;
    pEstoque->produtos = NULL;
}

int main() {
    TEstoque Estoque;
    alocaEstoque(&Estoque);
    incluirProdutos(&Estoque); 
    listarProdutos(&Estoque);
    desalocaEstoque(&Estoque);
    return 0;
}