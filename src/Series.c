#include <stdio.h>

//Codigo para realizar una secuencia de simbolos en crecimiento:

void SerieSignos(int cantidad)
{
    int count = 1;
    char signo = '+';

    while( count <= cantidad )
    {
        if( count % 2 ==0 )
        {
            signo = '-';
        }

        else
        {
            signo = '+';
        }

        for(int i = 1; i<=count; i++)
        {
             printf("%c", signo);
        }
        printf("\t");
        count = count + 1;
    }
}

void SerieSignosOptimos (int cantidad)

//Lo mismo de arriba pero simplificado:

{
        for(int count = 1; (count <= cantidad); count++)
        {
            for(int i = 1; i<=count; i++)
                printf("%c", (count % 2 == 0)?'-': '+');
            printf("\t");
        }

}



void main ()
{
    SerieSignos(10);
    //SerieSignosOptimos (6);
}