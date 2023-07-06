#include <stdio.h>

#define PI 3.1415

int main()
{
        float raio, area, volume;

        printf("Digite o raio da esfera (ex: 4): ");
        scanf("%f", &raio);

        /* Formulas para area e volume da esfera*/
        area = 4 * PI * raio;
        volume = area / 3;
        printf("Area da esfera: %f\n", area);
        printf("Volume da esfera: %f\n", volume);

        return 0;
}