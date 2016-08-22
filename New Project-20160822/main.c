#include <stdio.h>
/* Programa conversor grados Fahrenheit a Celsius */
int main()
{
    float Farenheit, Celsius;
    
    /* Pedir y recibir el número de grados Farenheit a convertir*/
    printf("Numero de grados Farenheit a convertir:");
    scanf("%f", &Farenheit);
    
    /* Se realiza la conversion mediante el uso de una fórmula */
    Celsius = ( Farenheit - 32 ) * ( 9.0 / 5.0 );
    
    /* Se imprime el resultado */
    
    printf("\n%f Grados Farenheit equivalen a %f grados Celsius\n", Farenheit, Celsius );
    
    

    return 0;
}

