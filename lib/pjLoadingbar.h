#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../lib/pjColors.h"
#define TIEMPO 55000

void pjBote (char *labbel)
    {
        int n=15;
        // char str[3];
        // do
        // {
        // printf  (">>Ingresa el espacio que deseas: ");
        // gets    (str);
        // sscanf  (str, "%i", &n);
        // } while (n<=0);
        // fflush(stdin);

        // printf("\n");

        for (int i = 0; i < n; i++) 
        {
            printf("\r[");
            for (int j = 0; j < i; j++) 
            {
                printf(" ");
            }
            printf("%s", *labbel);
            for (int j = i + 1; j < n; j++) 
            {
                printf(" ");
            }
        printf("]");
        usleep(TIEMPO);
    }
    printf("\n\n");
}