#include <stdio.h>
#include "conversortemperatura.h"

int main(void)
{
    float temp;

    printf("Temperatura em Kelvin: ");
    scanf("%f", &temp);

    temp = kelvinToCelsius(temp);

    printf("Temperatura em Celsius: %.2f\n", temp);

    return 0;
}
