#include <stdio.h>

int main( )
{
    int i = 0;

    // anadir el goto

    for( ; i<10 ; i++  )
    {
        if (i == 7)
            continue; // es para saltarse lo que dice ahi, pero sigue corriendo el programa

        if (i >=9)
            break;   // sirve para detener la orden de golpe, cuando llega a esa condicion, finaliza el programa
        
        printf("\n %i", i);
        
    }
    printf("\n Se termina el condicional");
    return 0;
}
