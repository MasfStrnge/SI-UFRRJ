#include <stdio.h>
#include <stdlib.h>

int fatorial(int val) {

    if (val==1) {
        
        val *= fatorial(val--);
        return val;
    }

    return val;
}

int main() {
   
    fatorial(3);

    return 0;
}