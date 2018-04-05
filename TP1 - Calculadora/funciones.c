#include <stdio.h>
#include <stdlib.h>
float sumar (float x, float y)
{
    float suma;

   while (x==0 && y==0)
    {
       suma=printf("Error! No ha ingresado valor para alguno de los operandos.\nPara poder realizar la operacion A y B deben ser distintos de 0.\n");
       return suma;

    }
        suma= x + y;
    printf("La suma entre %.2f y %.2f es igual a:%.2f\n",x,y,suma);
    return suma;
}



float restar(float x, float y)
{
    float resta;


     while (x==0 && y==0)
    {
       resta=printf("Error! No ha ingresado valor para alguno de los operandos.\nPara poder realizar la operacion A y B deben ser distintos de 0.\n");
       return resta;

    }
    resta=x - y;
    printf("La resta entre %.2f y %.2f es igual a:%.2f\n",x,y,resta);
    return resta;
}

float dividir(float x, float y)
{
    float division;
    if (y==0)
    {
        printf("No se puede dividir entre 0, intentalo con otro numero.\n");
        return division;
    }
    else
    {
       division=(float)x / y;
       printf("La division entre %.2f y %.2f es igual a:%.2f\n",x,y,division);
       return division;
    }

}

float multiplicar (float x, float y)
{
    float multiplicacion;

    while (x==0 && y==0)
    {
       multiplicacion=printf("Error! No ha ingresado valor para alguno de los operandos.\nPara poder realizar la operacion A o B deben ser distintos de 0.\n");
       return multiplicacion;

    }
    multiplicacion=x*y;
    printf("La multiplicacion entre %.2f y %.2f es igual a:%.2f\n",x,y,multiplicacion);
    return multiplicacion;
}

 float factor (float x, float y)
 {


    float factorial;

    if (x==0)
        {
         factorial=1;
         printf("El factorial del 0 es igual a: %.2f\n", factorial);

    return factorial;
        }
    else
    {

    for(factorial=x;x>1;x--)
                {

                    factorial=factorial*(x-1);

                }
    printf("El factorial del primer operando es igual a: %.2f\n", factorial);
    return factorial;
    }
 }
