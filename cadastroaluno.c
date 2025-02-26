#include <stdio.h>

int main(){
    int idade;
    int matricula;
    float altura;
    char nome [50];

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Nome do Aluno(a): %s - Matricula do Aluno(a): %d \n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);

    return 0;


}