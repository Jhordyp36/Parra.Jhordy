#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "../lib/pjColors.h"
#include <ctype.h>
#include <string.h>

#define TIEMPO2 55000

void pjSolo1Rprofe ()
{
    int n=15;
    for (int i = n; i >= 0; i--) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            printf(".");
        }
        if (i != n) {
            printf("\\profe/");
        }
        for (int j = i + 1; j < n; j++) {
            printf(".");
        }
        printf("]");
        fflush(stdout);
        usleep(TIEMPO2);
    }

    printf("\n\n");
}
void pjSolo1Iprofe ()
    {
        int n=15;
        char str[3];
        
        for (int i = 0; i < n; i++) 
        {
            printf("\r[");
            for (int j = 0; j < i; j++) 
            {
                printf(".");
            }
            printf("\\profe/");
            for (int j = i + 1; j < n; j++) 
            {
                printf(".");
            }
        printf("]");
        usleep(TIEMPO2);
    }
}

void pjCape1Rprofe ()
{
    int n=15;
    for (int i = n; i >= 0; i--) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            printf(".");
        }
        if (i != n) {
            printf("\\profe,Cape/");
        }
        for (int j = i + 1; j < n; j++) {
            printf(".");
        }
        printf("]");
        fflush(stdout);
        usleep(TIEMPO2);
    }

    printf("\n\n");
}
void pjCape1Iprofe ()
{
        int n=15;
        
        for (int i = 0; i < n; i++) 
        {
            printf("\r[");
            for (int j = 0; j < i; j++) 
            {
                printf(".");
            }
            printf("\\profe,Cape/");
            for (int j = i + 1; j < n; j++) 
            {
                printf(".");
            }
        printf("]");
        usleep(TIEMPO2);
    }
    printf("\n\n");
}

void pjLobo1Rprofe ()
{
    int n=15;
    for (int i = n; i >= 0; i--) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            printf(".");
        }
        if (i != n) {
            printf("\\profe,Lobo/");
        }
        for (int j = i + 1; j < n; j++) {
            printf(".");
        }
        printf("]");
        fflush(stdout);
        usleep(TIEMPO2);
    }

    printf("\n\n");
}
void pjLobo1Iprofe ()
{
        int n=15;
        
        for (int i = 0; i < n; i++) 
        {
            printf("\r[");
            for (int j = 0; j < i; j++) 
            {
                printf(".");
            }
            printf("\\profe,Lobo/");
            for (int j = i + 1; j < n; j++) 
            {
                printf(".");
            }
        printf("]");
        usleep(TIEMPO2);
    }
    printf("\n\n");
}

void pjUvas1Rprofe ()
{
    int n=15;
    for (int i = n; i >= 0; i--) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            printf(".");
        }
        if (i != n) {
            printf("\\profe,Uvas/");
        }
        for (int j = i + 1; j < n; j++) {
            printf(".");
        }
        printf("]");
        fflush(stdout);
        usleep(TIEMPO2);
    }

    printf("\n\n");
}
void pjUvas1Iprofe ()
{
        int n=15;
        
        for (int i = 0; i < n; i++) 
        {
            printf("\r[");
            for (int j = 0; j < i; j++) 
            {
                printf(".");
            }
            printf("\\profe,Uvas/");
            for (int j = i + 1; j < n; j++) 
            {
                printf(".");
            }
        printf("]");
        usleep(TIEMPO2);
    }
    printf("\n\n");
}