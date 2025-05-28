#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int qt_alunos[] = {5,6,8,11};

    typedef qt_alunos qa;
   
    printf("%d\n",*qa);

    return 0;
}