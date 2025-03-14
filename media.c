#include <stdio.h>

int main() {
    float n1, n2, n3; 
    int p1, p2, p3;
    float media, mediaponderada;

    printf("Insira o valor da N1: \n");
    scanf("%f", &n1);

    printf("Insira o valor da N2: \n");
    scanf("%f", &n2);

    printf("Insira o valor da N3: \n");
    scanf("%f", &n3);

    printf("Insira o peso da N1: \n");
    scanf("%d", &p1);

    printf("Insira o peso da N2: \n");
    scanf("%d", &p2);

    printf("Insira o peso da N3: \n");
    scanf("%d", &p3);

    media =(n1 + n2 + n3) / 3;

    mediaponderada = (float)((n1*p1) + (n2*p2) + (n3*p3)) / (p1 + p2 + p3);

    printf("A média simples é: %.2f \n", media);

    printf("A média ponderada é: %.2f \n", mediaponderada);
    
    return 0;


}