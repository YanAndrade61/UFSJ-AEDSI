#include <stdio.h>

int main()
{
        float base, altura, area;
        
        printf("Digite base e altura do triangulo (ex: 4 5): ");
        scanf("%f %f", &base, &altura);

        /* Formula da area do triangulo */
        area = ( base * altura ) / 2;
        printf("Area do triangulo: %.2f", area);

        return 0;
}