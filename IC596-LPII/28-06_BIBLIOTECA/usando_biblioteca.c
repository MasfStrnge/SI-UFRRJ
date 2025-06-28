#include <stdio.h>
#include "conversortemperatura.h"

float temp;

int main(void)
{
    printf("temp em celsius:");
    scanf("%f",&temp);

    temp = celsiusToKelvin(temp);

    printf("\n A temperatura em kelvin é:\n",temp);
    
    return 0;

}