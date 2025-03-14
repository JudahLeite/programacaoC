#include <stdio.h>

int main(){

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;

    printf("O produto %s tem estoque %u e o seu valor unitario é R$ %.2f \n", produtoA, estoqueA, valorA);
    printf("O produto %s tem estoque %u e o seu valor unitario é R$ %.2f \n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;

    printf("O produto %s tem estoque minimo (%d) \n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo (%d) \n", produtoB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o de B (R$ %.2f)? (%d) \n ", (valorA*estoqueA), (valorB*estoqueB), (valorA*estoqueA) > (valorB*estoqueB));


    


return 0;    
}