// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(){
    int num1, num2, num3, soma;

    printf("Informe os tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    soma = num1 + num2 + num2;
    printf("A soma dos numeros: %d", soma );
}