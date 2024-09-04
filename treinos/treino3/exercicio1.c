#include <stdio.h>

int main()
{
        int ano;

        printf("Digite um ano (ex: 2022): ");
        scanf("%d", &ano);

        if( ano % 400 || ( ano % 4 == 0 && ano % 100 != 0 ) )
                printf("O ano %d eh bissexto\n");
        else
                printf("O ano %d nao eh bissexto\n");
        
        return 0;
}