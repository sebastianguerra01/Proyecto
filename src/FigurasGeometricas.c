#include <stdio.h>

void MaxNumeros()
{
int a=11, b=34;

    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("El mayor valor es: %d", a);
    }
    else
    {
        printf("El mayor valor es: %d", b);
    }    
}

void LineaBienChevere()

{
    for(int i=2; i<=20; i=i+2)
    {
        printf("-");
    }

}

void LetraL()

{
    for(int i=1; i<=10; i=i+1)
    {
        printf("-\n");
    }
    for (int i=1; i<=10; i=i+1)
    {
        printf("-");
    }
}

void CuadradoBienPro()

{
    for(int u=1; u<=10; u++)
    {
        for (int h=1; h<=10; h++)
            printf("x ");
        printf("\n");
    }
}

void main()
{
    //MaxNumeros();
   //LineaBienChevere();
    //LetraL();
    CuadradoBienPro();

}

