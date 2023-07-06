#include <stdio.h>

int main()
{
        int ano, mes, dia;

        printf("Digite sua idade (ex: anos meses dias): ");
        scanf("%d %d %d", &ano, &mes, &dia);

        /*
         * 1 ano -> 365 dias
         * 1 mes -> 30 dias
         */
        dia += ano*365;
        dia += mes*30;
        printf("Idade em dias: %d\n", dia);

        return 0; 
}