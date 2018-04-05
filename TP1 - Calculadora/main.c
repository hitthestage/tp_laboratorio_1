#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

int main()
{

    char seguir='s';

    int opcion=0;

    float numero1;
    float numero2;

    int flagop1=0;
    int flagop2=0;

    do{
    system("color D0");






    if (flagop1==0)
        {
        printf("\n ::   C A L C U L A D O R A   E N  C   ::\n\n");
         printf("\n Ingresar 1er operando con el que trabajara (A=0.00): ");
         scanf("%f", &numero1);
        flagop1=1;
        }
    if (flagop2==0)
        {
        printf("\n Ingresar 2do operando con el que trabajara (B=0.00): ");
        scanf("%f", &numero2);
        flagop2=1;
        }

        system("cls");
        printf("\n ::   C A L C U L A D O R A   E N  C   ::");

        printf("\n\n |    M E N U  D E  O P C I O N E S    |\n\n");


        printf("1- Reingresar 1er operando (Actualmente A=%.2f)\n", numero1);
        printf("2- Reingresar 2do operando (Actualmente B=%.2f)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("Por favor seleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                printf("Ingrese 1er operando: ");
                scanf("%f",&numero1);
                break;
            case 2:

                printf("Ingrese 2do operando: ");
                scanf("%f",&numero2);
                break;
            case 3:
                sumar(numero1,numero2);
                break;
            case 4:

                restar(numero1,numero2);
                break;
            case 5:
             dividir(numero1,numero2);
                break;
            case 6:

               multiplicar(numero1,numero2);
                break;
            case 7:
               factor(numero1,numero2);
                break;
            case 8:
                sumar(numero1,numero2);
                restar(numero1,numero2);
                dividir(numero1,numero2);
                multiplicar(numero1,numero2);
                factor(numero1,numero2);
                break;
            case 9:
                seguir = 'n';

                break;
        }
    printf("\nDesea continuar? s/n: ");
    fflush( stdin );
    scanf("%c",&seguir);
    seguir=tolower(seguir);


    }while(seguir=='s');

    return 0;


}
