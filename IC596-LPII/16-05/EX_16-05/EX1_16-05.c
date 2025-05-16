/*1) Faça uma função em c que receba uma matriz por referência
e calcule sua determinante.*/

#include <stdio.h>
#include <stdlib.h>

void determinante_matriz(int *matriz) {

}



int main () {

    int matriz[3][3] = {{5,4,3,2,1},{9,8,7,6,5}};

    determinante_matriz(&matriz[3][3]);

    return 0;


}