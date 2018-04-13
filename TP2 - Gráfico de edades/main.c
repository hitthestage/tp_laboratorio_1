#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    system("color F1");
    EPersona personas [20];
    char seguir='s';
    int opcion;

    inicializandoPersona(personas);

    do
    {
        system("cls");

        printf("1- Alta persona\n");
        printf("2- Baja persona\n");
        printf("3- Lista ordenada de personas\n");
        printf("4- Mostrar grafico de edades\n\n");
        printf("5- Salir\n");

        printf("\n\n Ingrese la opcion deseada: ");
        scanf("%d",&opcion);
        printf("\n\n");

        while(opcion<1 || opcion>5)
        {
            printf("Usted a ingresado una opcion no valida, por favor reingrese.\n\n Ingrese la opcion deseada:");
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
            case 1:
                altaPersonas(personas);
                system("pause");
                break;
            case 2:
                bajaPersona(personas);
                system("pause");
                break;
            case 3:
                system("cls");
                printf(":: Listado de personas :: ");
                printf("\n\nNombre   edad  DNI\n\n");
                mostrarPersonas(personas);
                system("pause");
                break;
            case 4:
                grafico(personas);
                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }

        fflush(stdin);
        printf("\nDesea salir del programa? s/n: ");

        scanf("%c",&seguir);
        seguir=tolower(seguir);

    }while (seguir=='n');

    return 0;
}
