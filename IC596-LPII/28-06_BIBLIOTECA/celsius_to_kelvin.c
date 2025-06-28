#include <stdio.h>
#include "conversortemperatura.h"

int main(void)
{
    float temp;

    printf("Temperatura em Celsius: ");
    scanf("%f", &temp);

    temp = celsiusToKelvin(temp);

    printf("Temperatura em Kelvin: %.2f\n", temp);

    return 0;
}
