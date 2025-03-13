#include <stdio.h>

int main(){

float numero1, numero2;
int soma, subtracao, multiplicacao;
float divisao;

printf("Entre com o primeiro numero: \n");
scanf("%f", &numero1);

printf("Entre com o segundo numero: \n");
scanf("%f", &numero2);

// operação soma
soma = numero1 + numero2;

// operação subtração
subtracao = numero1 - numero2;

// operação multiplicação
multiplicacao = numero1 * numero2;

// operação divisão
divisao = numero1 / numero2;

printf("A soma é: %d \n", soma);
printf("A subtração é: %d \n", subtracao);
printf("A multiplicação é: %d \n", multiplicacao);
printf("A divisão é: %f \n", divisao);

numero1 += 20;
printf("%f \n", numero1);

numero1 -= 20;
printf("%f \n", numero1);

numero1 *= 20;
printf("%f \n", numero1);

numero1 /= 20;
printf("%f \n", numero1);

numero2++;
printf ("%f \n", numero2);

numero2--;
printf ("%f \n", numero2);


}