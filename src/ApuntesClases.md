# Programacion
 
# 18 de Mayo
Con el Markdown se escribe codigo, todo lo que se haga, tiene que tener el readme.md

Scribs, es como se nombra a un archivo de codigo.

Compilar el codigo (que no haya ningun error).

### Tener para el Viernes ya la consola lista 

# 20 de Mayo
Las calificaciones son de: Examen(3), Proyecto (3), Workshop(2) y Deberes (2) cada Bimestre, tambien hay la opcion de ganar puntos extra por investigar, el Workshop consiste en presentar las anotaciones y avances que se hayan hecho en toda la semana, todos los viernes. 

Tutorias los jueves.

# Clase 24 de Mayo:

El uso del lenguaje C, se enfoca en la programacion estructurada, en cambio el C++, se usa para programacion orientada a objetos. La clase se enfocara en el lenguaje C.
Unix fue la base para la creacion de C.
La tipificacion de datos consiste en definiciones que ayudan a definir el tipo de datos, como por ejemplo, int, float, char, bool etc.
El control de flujo es como se van a manejar los datos, es decir, su comportamiento, como por ejemplo:  
- if-else, for, o for(n), while(<,>,=), do (<,>,=), break, switch 

Son condicionales para que funcione de x forma un archivo, (son palabras reservadas que no se pueden usar en otro lugar).

El lenguaje de maquina consiste en una serie de codigo binario que lo interpreta la computadora, y el lenguaje natural son las palabras mismas.

El compilador transforma de lenguaje humano a lenguaje de maquina, pasando por un proceso de verificacion.

El estandar ANSI es una organizacion que crea estandares para cosas usadas.

Los headers, o coleccion de encabezadores, son scribs hechos previamente, los cuales puedes ser importados a otras librerias, usualmente van al inicio del archivo.

Las funciones (return) retorna un valor, y procedimientos son acciones que se dan, pero no retorna nada, son acompañantes del control de flujo.

El ; es donde acaba la instruccion del codigo, y da inicio una nueva orden.

Se podria decir que uno de los problemas de C y C++, es que no se lo suele usar para desarrollar paginas web.

Main es desde donde empieza a compilar la compu.

El printf es para que muestre los caracteres en la consola, el stdio es la libreria que nos permite eso.

# Clase 25 de Mayo / Algoritmia

Pseudocodigo es la forma de representar un algoritmo, el diagrama de flujo, codigo (debugging), traza (traze), es una prueba de que funciona el programa, muestra linea por linea como sera el programa. Todo lo mencionado es parte escencial de plantear una solucion a un problema.

El pseudocodigo es basicamente la escritura a mano de un algoritmo.

El diagrama de flujo es el mismo algoritmo pero transformado de otra forma, existe una nomenclatura a seguir: el ovalo da inicio y final al diagrama de flujo, la flecha indica el orden de ejecuion del algoritmo, el paralelogramo indica lo que se va a mostrar en la pantalla y lee los datos proporcionados, el rectangulo incluye cualquier tipo de operacion, el diamante analiza una situacion.

La algoritmia y el diagrama de flujo, va a ser necesario hacer ambos, ya que son formas de representar una solucion.

El trace es la representacion de como el sistema va a interpretar el codigo, se sigue el mismo orden en el que fueron escritas las soluciones 

## Ejemplo de Pseudocodigo:

#### Determinar el mayor de 3 numeros
1. imprimir "Ingrese el primer valor"
2. leer a
3. imprimir "Ingrese el segundo valor"
4. leer b
5. imprimir "Ingrese el tercer valor"
6. leer c

    7. Si (a>b) y (a>c) 
    imprimir "El mayor valor es a"
    8. Si (b>a) y (b>c)
    imprimir "El mayor valor es b"
    9. Si (c>a) y (c>b)
    imprimir  "El mayor valor es c"
    10. Si (a=b) y (a=c)
    imprimir "Todos los valores son iguales"
    11. Si (a=b) y (a>c)
    imprimir "Los valores a y b son iguales y mayores que c"
    12. Si (b=c) y (b>a)
    imprimir "Los valores b y c son iguales y mayores que a"
    13. Si  (a=c) y (a>b)
    imprimir "Los valores a y c son iguales y mayores que b"

## Ejemplo de Trace:

|   Entrada   |  a  |  b  |  c  |        Salida          |   
|-------------|-----|-----|-----|----------------------  |
|      _      |  10 |  20 |  35 |Ingrese el primer valor |
|a            |     |     |     |         10             |
|      _      |     |     |     |Ingrese el segundo valor|
|b            |     |     |     |         20             |
|      _      |     |     |     |Ingrese el tercer valor |
|c            |     |     |     |         35             |
|      _      |     |     |     |  El mayor valor es c   |


# Clase 27 de Mayo


### Comandos para compilar

g++ src/main.c -o output/main.exe
./output/main.exe

[Max2Numeros](/resources/Max2Numeros.png)

### Codigo para determinar el mayor de dos numeros:

```c

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

```

## CLASE 30 DE MAYO

El lenguaje C fue creado en el year de 1972, CONTINUA.....

Existen varios tipos de datos, int para enteros (short enteros cortos, long para enteros largos) float para decimales, char para caracteres de una letra, los tipos de datos double se usan en datos con decimales muy grandes, es decir, como un float pero con muchos mas decimales y enteros. El short y el long se utilizan para ahorrar almacenamiento.

Para un dato tipo float, se asignan el doble de espacio, es decir, 32 espacios para decimales, 32 para los decimales, 

Usualmente, por ejemplo en una memoria RAM, se asignan espacios definidos para los tipos de variables que se pueden generar, por medio de sectores. Un tipo de dato no puede ser almacenado enotro no comatible, como almacenar un int en un char. Tenemos que hacer una correcta conversion.

Un arreglo es el almacenamiento de varios datos a la vez, es decir, una matriz, cada dato tiene su direccion de memoria.

Todo procedimiento lleva la palabra void.

ISSUE = ERROR = BUG

El while es una instruccionde bucle, hasta llegar al limite o que se cumpla la condicion, \t para poner un tabulado.

## CLASE 31 DE MAYO

En las estructuras de control, podemos incluir a los procedimientos, como void, ej: void Sebastian().

El procedimiento con parametros, es un void, pero se declara una variable, ej: void Sebastian(hola).

En una funcion se declara primero un tipo de dato, seguido del nombre del procedimiento.

La funcion con parametros, es el tipo de dato, pero se declara una variable, ej: <numero> Sebastian(hola).

El tipo de dato es la clasificacion que dio el mismo sistema a ciertos tipos de datos.

Una funcion busca hacer un calculo y devolver un valor, nunca van con el void, y al final el return.

!= diferente de, % sobrante de, usleep es para retrasar la velocidad de procesamiento del codigo.


## CLASE 1 DE JUNIO

El mismo tipo de dato que se pone en la funcion, tiene que estar en el return.

- ### Diagrama de control de flujo.

Es secuencial, cuando se ejecuta en una sola linea, es condicional cuando lleva el if, if-else, if-else if, se ejecutara de una forma u otra dependiendo la condicional. Es de control cuando tenemos un ciclo o bucle, es decir, una condicional, ej: while "condicion", for, do-while. Usualmente a los apuntes se los llama "chuletas" xd.

- ### Series

El for es un poco mas estricto, es decir, solo se ejecuta algo secuencial, mientas que el while se ejecuta en base a una serie de repeticiones, como por ejemplo al hacer una condicion

El en while siempre poner un contador, un operador ternario es un proceso para simplificar codigo, tiene 3 partes: la condicion, el entonces y el caso contrario, ?=if, :=else.

El %d es para numeros, el %c es para caracteres, /r es para que los caracteres se presenten en un mismo lado.

## CLASE 6 DE JUNIO

Existen varios tipos de datos, los cuales sirven para definir variables, en cambio los caracteres sirven para guardar datos, ej: char caracter = '1', cada casillero ocupa 1 byte de espacio.
Los int tiene varios casilleros definidos, no como el char que solo tiene un casillero.
Un arrat, o vector es un caracter al que se le puede asiganr un numero de casilleros, para poner como caracter una palabra, en el caso que no se defina la memoria a usarse, se puede poner un caracter de cualquier longitud, simepre y cuando la RAM lo permita, por ejemplo: char nombre [] =, los espacios cuentan como caracteres.
- Entradas y Salidas:

El printf nos sirve para mostrar datos, mientras que el scanf recopila los datos de las variables, %d para datos numericos, %s para vectores de tipo char, %c para caracteres.

En los vectores, o llamados array se define la cantidad de cifras o caracteres que van haber, siempre se empieza a contar desde el 0, ej:

int numeros[3];
numeros[0] = 1;
numeros[1] = 5;
numeros[2] = 4;

return(0)

El arterisco *, nos sirve para guardar varios caracteres. El char solo nos ayuda a guardar una cadena de caracteres.

## CLASE 7 DE JUNIO

A los carateres se los pone entre comillas sencillas, el & significa, guarda en.
El fgets sirve para guardar un avlor en una variable, limitando el maximo de caracteres, stdin es para que tome lo de la consola. Ej: 
fgets(caracteres, 10, stdin);
El %i sirve para mostrar un valor entero, el switch es para analizar varias variables a la vez, es decir, para simplificar el if, todas sus instrucciones llevan un break al final.

## CLASE 8 DE JUNIO:

El strlen captura la longitud del array, y se lo puede presentar en pantalla, ademas sirve para declarar el valor de una variable, libreria string.h para usar esta funcion. realloc sirve para redimencionar una variable global. sizeof sirve para almacenar un char o tipo de dato.
system("cls") es el equivalente a escribir clear en la consola

## CLASE 10 DE JUNIO

Intentar hacer las preguntas que mostro para el examen
En las librerias nunca va el main.
Los dos puntos, es para salir de la libreria ..
atoi convierte chars en numeros
enum sirve para relacionar variables con numeros, como por ejemplo, en los colores, siempre van en librerias.
HANDLE es un termino resercado para acceder a modificar la consola, como cambiar el color.
setColor para poner colores, el primer color sera para el fondo, el segundo para el texto.

## CLASE 13 DE JUNIO

Una constante es un valor que nunca cambia, ademas, estas constantes pueden ser usadas en cualquier parte del codigo.
Las constantes pueden ir en las librerias, es decir, en la carpeta lib, además, deben ir al inicio del codigo.
Para declarar la variable, será: const(tipo de dato) (nombre del dato) = (valor del dato).

EJ: const int Largo = 35

Mientras que las variables globales, pueden ser usadas en cualquier codigo, vienen definidas como: #define LOW 0
Estas variables no llevan el ;

### Entrada y salida de caracteres:

- En este caso usaremos "getchar", el cual captura un caracter mostrado en consola, ej: c = getchar();
- Mientras que el "putchar", es usado para imprimir un caracter del codigo en la consola, es el equivalente del printf solo que se puede imprimir un solo caracter, ej: putchar(c);
- El fgets, es como un putchar, pero se puede definir la cantidad de caracteres a obtener, pueden ser traidos de la terminal o de un archivo.

El != significa "diferente de", el EOF significa fin del archivo, nos ayuda a identificar el ultimo caracter de un archivo.
Para escanear una variable, usualmente se usa el % y la inicial del tipo de dato, por ejemplo, para int %i, para float %f, para long %ld. Hay casos como para datos tipo char, usaen el %c para caracteres y %s para arrays.
El ++ indica que la variable aumentara en 1, ej: a++.
El = asigna un valor, mientras que el == pregunta si un valor es igual a otro. Cuando estemos en un condicional, para representar la 'o', escribiremos || , mientras que para poner'y', usaremos &&, ejemplos:
if(a==b || b=0)
if (a!=b && b=0)

### Argumentos:
- Llamadas por valor: Es cuando enviamos valores para que pasen por alguna operacion, por ejemplo, una suma


- Llamadas por referencia


## CLASE 14 DE JUNIO 

Para variables globales, las palabras en mayustulas son para variables globales.
El \0 indica el final de una cadena de caracteres.

## CLASE 21 DE JUNIO

goto sirve para ciertas condiciones, pero no es recomendable su uso.

### Funciones

El getline, sirve para obtener todos los caracteres de una linea, getline(), mientras que el getchar solo captura un caracter, gerchar()

Ejemplo de getline:

char Linea[300]; //declara una linea que guarda 300 carateres, si hay mas caracteres, se perderan
getline(Linea, 300); //lee de Linea, la cantidad de 300 caracteres

El strindex, busca un patron en una linea, ej: strindex(Linea, pattern)

atoi, convierte de strin a numero, ej:
char line[] = "123";
int i = atoi(line);

el atof, convierte enteros a flotantes
char line[] = "123.534";
float f = atof(line);

f = i; // conversion implicita = cast o casting, de un float a un int, de un dato pequeno a un grande
// f=123.0000

i = f; // conversion explicita, ya que de un dato grande se intenta convertir en un pequeno

### Archivos o ficheros de texto

Es el acceso a un archivo, de algun lugar del almacenamiento del PC. Es importante realizar una correcta apertura y cierre de este archivo. Sobre estos archivos re pueden realizar varias operaciones, de apertura, de escritura, lectura y cierre. Si el archivo queda abierto, no puede ser usado por otro programa.
Para la apertura del archivo, lo podemoa hacer asi:

                        PONER EJEMPLO

el nombre-fichero es la ruta del archivo

El modo, sera el uso que se le va a dar al archivo, tenemos que:
r = abre un fichero para leerlo
w = abre un fichero para escritura, si no existe l crea, y si ya existe, lo destruye y crea otro nuevo
a = abre un fichero para anadir datos al final
+ = abre el archivo para leer y escribir
b = el fichero es de tipo binario
t = ficheros de tipo texto

Se pueden combinar estos modos a conveniencia para la apertura de archivos.
el fopen, es un procedimiento que indica la apertura de un archivo

### Lectura y escritura

El sizeof, calcula el tamano de un dato, sera, sizeof(dato) o sizeof(tipo-dato) 

el .dat  se usa para rchivos de tipo binario

fputc, para imprimir un caracter, fputs para una cadena de caracteres

### C++

Para C++, para imprimir, ponemos la palabra cout <<" "<<, para salto de linea, usamos el endl
Para guardar en consola, solo tendremos que poner cin, con los simbolos al lado contrario, ej: cin >> a;