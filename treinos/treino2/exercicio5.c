#include <stdio.h>

int main()
{
        int n, soma;

        printf("Digite um numero inteiro positivo (ex: 1): ");
        scanf("%d", &n);

        /* Formula para soma dos numeros de 1 ate n */
        soma = n * ( n + 1 ) / 2;
        printf("Soma de 1 ate %d: %d\n", n, soma);

        return 0;
}