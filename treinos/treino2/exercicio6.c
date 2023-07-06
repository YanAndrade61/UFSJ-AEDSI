#include <stdio.h>

int main()
{
        int segundo, minuto, hora;

        printf("Digite um tempo em segundos (ex: 365): ");
        scanf("%f", &segundo);

        /**/
        hora = segundo / 3600;
        segundo -= hora;
        minuto = segundo / 60;
        segundo -= minuto;
        printf("%d segundos => ", hora + minuto + segundo);
        printf("%d horas %d minutos %d segundos\n", hora, minuto, segundo);

        return 0;
}