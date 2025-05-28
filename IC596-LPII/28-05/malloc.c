#include <stdio.h>
#include <stdlib.h>

// sintaxe malloc:

// int *p = (*int)malloc(sizeof(int));
// *p = 10;
// free(p);

/* exemplo:
   int *array_p = (int*)malloc(5*sizeof(int));
   array_p[0];
   array_p[1];
    
   sintaxe calloc:
   
   int *p = calloc(1,sizeof(int));
   int *array_p = calloc(5,sizeof(int));*/