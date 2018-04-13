#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"



void  inicializandoPersona(EPersona persona[])
{
    int i;

    for(i=0;i<20;i++)
    {
        persona[i].status=0;
    }
}



int obtenerEspacioLibre(EPersona lista[])
{
    int contadorDeIndice=-1;
    int i;

    for(i=0;i<20;i++)
    {
        if(lista[i].status==0)
        {
            contadorDeIndice=i;
            break;
        }
    }

    return contadorDeIndice;
}


  void mostrarPersona(EPersona persona)
 {

     printf("\n%10s %5d %3d\n\n", persona.nombre, persona.edad, persona.dni);
 }

void mostrarPersonas(EPersona personas[])
{
    int i;
    for (i=0;i<20;i++)
        {
            if(personas[i].status==1)
                {
                    mostrarPersona(personas[i]);
                }
        }
}




void grafico(EPersona x[])
 {

     int menor18=0;
     int entre19y35=0;
     int mayorde35=0;
     int i;
     int mayor;
     int flag=0;


     for(i=0;i<20;i++)
     {
         if(x[i].status==1&&x[i].edad<=18)
            menor18++;

         if(x[i].status==1&&x[i].edad>=19&&x[i].edad<=35)
           entre19y35++;

         if(x[i].status==1&&x[i].edad>35)
            mayorde35++;

     }

     if(menor18>=entre19y35&&menor18>=mayorde35)
     {
         mayor=menor18;
     }

     else
     {
        if(entre19y35>=menor18&&entre19y35>=mayorde35)
        {
            mayor=entre19y35;
        }

        else
        {
           mayor=mayorde35;

        }

     }

     for(i=mayor;i>0;i--)
     {
         if(i<=menor18)
         {
             printf("%c", 178);
         }

         if(i<=entre19y35)
         {
            flag=1;
            printf("\t%c", 178);
         }

         if(i<=mayorde35)
         {
            if(flag==0)
            printf("\t\t%c", 178);

            if(flag==1)
            printf("\t%c", 178);

         }

        printf("\n");
     }

        printf("--------------------");
        printf("\n<18\t19-35\t 35>\n\n");

}


void altaPersonas(EPersona persona[])
{
    int status;
    int contadorDeIndice;
    int dni=0;
    int auxP;
    char auxCadena[50];
    contadorDeIndice=obtenerEspacioLibre(persona);

    if (contadorDeIndice==-1)
    {
        printf("\nNo hay suficiente espacio para realizar esta accion.\n\n");
    }
    else
        {
            printf("\nIngrese numero de DNI: ");
            fflush(stdin);
            scanf("%d", &auxP);

            while (auxP<0 || auxP>99999999)
            {
                printf("El DNI debe ser de 8 digitos y encontrarse entre 0 y 99999999. Por favor, reingrese.\n\n Ingrese numero de DNI: ");
                fflush(stdin);
                scanf("%d", &auxP);
            }

            dni=auxP;

            status=buscarPorDni(persona, dni);

            if (status!=-1)
            {
                printf("El DNI %d ya se encuentra en el sistema.\n Por favor, reingrese.\n\n Ingrese numero de DNI: ", dni);
            }

            else
            {
                persona[contadorDeIndice].dni=dni;
                printf("Ingrese nombre: ");
                fflush(stdin);
                gets(auxCadena);

                while (strlen(auxCadena)>25)
                {
                    printf("El nombre ingresado es demasiado largo. Por favor, reingrese.\n\n Ingrese nombre:  ");
                    fflush(stdin);
                    gets(auxCadena);
                }

                strcpy(persona[contadorDeIndice].nombre, auxCadena);
                printf("Ingrese edad: ");
                fflush(stdin);
                scanf("%d", &auxP);

                while (auxP<0 || auxP>100)
                {
                    printf("La edad debe estar entre 0 y 100. Por favor, reingrese.\n\n Ingrese edad:  ");
                    fflush(stdin);
                    scanf("%d", &auxP);

                }
                persona[contadorDeIndice].edad=auxP;
                persona[contadorDeIndice].status=1;
                printf("\nPersona ingresada exitosamente!\n\n");
            }
        }
}


void listarPersona (EPersona x[])
{
    int i;
    int j;
    EPersona auxP;

    for(i=0;i<19;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if (strcmp(x[i].nombre, x[j].nombre)>0)
            {
                auxP=x[i];
                x[i]=x[j];
                x[j]=auxP;
            }
        }
    }
}


int buscarPorDni (EPersona lista[], int dni)
{
    int contadorDeIndice=-1;
    int i;

    for (i=0;i<20;i++)
    {
        if(lista[i].dni == dni)
        {
            contadorDeIndice=i;
            break;
        }
    }
    return contadorDeIndice;
}


void bajaPersona(EPersona persona[])
{
    int confirmarBaja;
    int contadorDeIndice;
    int dni;

    printf("\nIngrese el DNI de la persona a  dar de baja en el sistema: ");
    fflush(stdin);
    scanf("%d", &dni);

    contadorDeIndice= buscarPorDni(persona, dni);


        if (contadorDeIndice== -1)
        {
            printf("El DNI %d no se encuentra cargado en el sistema.\n", dni);
        }
        else
        {
                printf("\n\n::: Datos de la persona a dar de baja :::\n\n");
                printf("\n\n    Nombre    edad   DNI \n\n");

                mostrarPersona(persona[contadorDeIndice]);

                printf("\n\nUsted va a borrar a %s, es correcto? s/n \n", persona[contadorDeIndice].nombre);

                confirmarBaja=tolower(getch());

                if (confirmarBaja=='s')
                {
                    persona[contadorDeIndice].status=2;
                    printf("La persona inhabilitada exitosamente.\n");
                }
                else
                {
                    printf("\nNo se ha modificado la informacion. Retornando al menu principal.\n");
                }
        }

    system("pause");
}


