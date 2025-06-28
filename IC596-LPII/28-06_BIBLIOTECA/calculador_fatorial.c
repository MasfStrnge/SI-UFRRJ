#include "calculador_fatorial.h"

int fatorial_laco(int num) {
    int resultado = 1;

    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }

    return resultado;
}

int fatorial_recursivo(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fatorial_recursivo(num - 1);
}
