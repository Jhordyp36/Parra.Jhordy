/**
 * Copyright @2023
 * All rights reserved, Jhordy 
 * Libreria de Utilidades
*/
#include <stdio.h>
#include <unistd.h>


/**
 * getNroTerminos, Genera numeros positivos para los terminos
 * @n, Numero de terminos para generar
*/
void getNroTerminos(int *nroTerminos)
{
    char str[3];

    do
    {
        printf(">> Ingresa el numero de terminos: ");
        gets(str);
        sscanf(str, "%i", nroTerminos);
    } while (*nroTerminos <= 0);
    fflush(stdin);
}



/**
 * clearTerminal, Limpia la terminal
*/
void clearTerminal()
{
    system("cls||clear");
    fflush(stdout);
    fflush(stdin);

}

int getNumeroPositivo(char *label) //
{
    int numero;
    char str[3]; 
    do
    {
        printf("\n %s", label);
        gets(str);
        sscanf(str,"%d", &numero);   
    } while (numero <= 0 ); 
    fflush(stdin);
    return numero;  
}
