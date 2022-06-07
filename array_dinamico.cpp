/* 
Nombre: Jesús Ortega
CI: 29891702
    Estructuras Dinámicas de Datos
    Array dinámicos

Programa para introducir números en un arreglo dinámico,
Este retornará el número de mayor valor 
y el de menor valor */


#include<stdio.h>
#include<stdlib.h>


int n;

float *arreglo;

void crear_arreglo ()
{
printf ("\n Indique la cantidad de numeros: ");
scanf ("%d",&n);

arreglo = (float *) malloc(n * sizeof(float));

}

void llenar_arreglo () 
{
for (int i=0; i<n; i++) {
    printf ("\n Introduzca un numero: ");
    scanf ("%f",&arreglo[i]);
}
}

float calcular_mayor ()
{
    float mayor = arreglo[0];
    for (int i=1;i<n;i++){
if (arreglo[i] > mayor)
{
    mayor = arreglo[i];
}
}
return mayor; 
    }


float calcular_menor ()
{
  float  menor = arreglo[0];
    for (int i=1;i<n;i++){
if (arreglo[i] < menor)
{
    menor = arreglo[i];
}
}
return menor;
    }

void mostrar_resultados(){

printf("\n El numero mayor es: %f", calcular_mayor());
printf("\n El numero menor es: %f", calcular_menor());
}

int main () {
    crear_arreglo();
    llenar_arreglo();
    mostrar_resultados();
    free(arreglo); 
    return 0;
}