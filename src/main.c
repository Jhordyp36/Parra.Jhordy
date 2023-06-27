#include <stdio.h>
#include "../lib/pjColors.h"
#include "../lib/Utilidades.h"
#include "../lib/pjEjercicio.h"
#include <ctype.h>
#include <string.h>
#include "../lib/pjLogin.h"

int main()
{
    clearTerminal();
    if (login())
    {
        char cedula[]="1751424050";
        char correo[]="jhordy.parra@epn.edu.ec";
        char nombre[]="jhordy oliver parra sarasti";
        char usuario1[]="profe";
        char contrasena1[]="1234";
        char str[3];
        int n=0;

        printf(RED"\n[+] Datos: ");
        printf(YELLOW"\n\t - Cedula: %s", cedula);
        printf(YELLOW"\n\t - Correo: %s", correo);
        printf(YELLOW"\n\t - Nombre: %s\n", nombre);

        printf(BLUE"\n\t Lobo Cape Uvas \\%s/ .............", usuario1);
        printf(CYAN"\n1. Solo");
        printf(CYAN"\n2. Lobo");
        printf(CYAN"\n3. Caperucita");
        printf(CYAN"\n4. Uvas");
        printf(CYAN"\n5. Salir");
        do
        {
            printf  (GREEN"\n>Cruzar: ");
            gets    (str);
            sscanf  (str, "%i", &n);
        } while (n<=0 || n>5);
        fflush(stdin);

        switch (n)
        {
        case 1:
            clearTerminal();
            pjSolo1Iprofe();
            pjSolo1Rprofe();
            printf(RED"No hay nada al otro lado", usuario1);
            printf(BLUE"\n\t Lobo Cape Uvas \\%s/ .............", usuario1);
            printf(CYAN"\n1. Solo");
            printf(CYAN"\n2. Lobo");
            printf(CYAN"\n3. Caperucita");
            printf(CYAN"\n4. Uvas");
            printf(CYAN"\n5. Salir");
            
            break;
        case 2:
            clearTerminal();
            printf(ROSE"\n");
            pjLobo1Iprofe();
            printf(MAGENTA"\n\t Cape Uvas  ............\\%s,Lobo/", usuario1);
            printf(CYAN"\n1. Solo");
            printf(CYAN"\n2. Lobo");
            printf(CYAN"\n3. Caperucita");
            printf(CYAN"\n4. Uvas");
            printf(CYAN"\n5. Salir");
            break;
        case 3:
            clearTerminal();
            printf(LGREEN"\n");
            pjCape1Iprofe();
            printf(YELLOW"\n\t Lobo Uvas  .............\\%s,Cape/", usuario1);
            printf(CYAN"\n1. Solo");
            printf(CYAN"\n2. Lobo");
            printf(CYAN"\n3. Caperucita");
            printf(CYAN"\n4. Uvas");
            printf(CYAN"\n5. Salir");
            break;
        case 4:
            clearTerminal();
            printf(YELLOW"\n");
            pjUvas1Iprofe();
            printf(LGREEN"\n\t Lobo Cape   .............\\%s,Uvas/", usuario1);
            printf(CYAN"\n1. Solo");
            printf(CYAN"\n2. Lobo");
            printf(CYAN"\n3. Caperucita");
            printf(CYAN"\n4. Uvas");
            printf(CYAN"\n5. Salir");
            break;
        
        default:
            printf("Gracias");
            break;
        }
    }
    else
        printf("Gracias");
    

}
    

