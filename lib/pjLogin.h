#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#define TAMANO_USUARIO 50
#define TAMANO_LETRA 50
#define INTENTOS 3
#define TIEMPO1 100000

bool login() 
{
    char usuario[TAMANO_USUARIO];
    char contrasena[TAMANO_LETRA];
    const char *usuarios[] = {"jhordy.parra@epn.edu.ec","profe"};
    const char *contrasenas[] = {"1751424050","1234"};
    int numUsers = sizeof(usuarios) / sizeof(usuarios[0]);
    int attempts = INTENTOS;

    while (attempts > 0) 
    {
        printf(">>Usuario:\n ");
        scanf("%s", usuario);

        printf(">>Contrasena:\n ");
        scanf("%s", contrasena);

        for (int i = 0; i < numUsers; i++) {
            if (strcmp(usuario, usuarios[i]) == 0 && strcmp(contrasena, contrasenas[i]) == 0) {
                for (int j = 0; usuario[j] != '\0'; j++) {
                    usuario[j] = toupper(usuario[j]);
                }

                printf("Bienvenido, '%s!\n'", usuario);
                return true;
            }
        }

        attempts--;
        printf("Inicio de sesion fallido. Usuario o contrasena incorrectos. Intentos restantes: %d\n", attempts);
    }

    printf("Lo sentimos tu usuario y clave son incorrectos..!\n");
    return false;
}