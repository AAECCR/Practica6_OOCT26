/*Cortés Romero Alberto Emiliano
Práctica 6 
ejercicio de tipos de variables, entradas y salidas*/
#include <stdio.h>

int main() {
void main()
{
  int entnum;
  char carac= 65 ; //convierte el numero en caracter ASCII
  char carac2 = 'a';
  double punto;
  //asignar valores de teclado a una variable
  printf("Escriba un valor entero\n");
  scanf("%i",&entnum);
  printf("Escriba un valor real:\n");
  scanf("%lf",&punto);
  //imprimir valores de formato
  printf("\n Imprimiendo las variables \a\n");
  printf("\t Valor de numero entero es %i \n", entnum);
  printf("\t Valor del caracter ASCII es: %c \n", carac);
  printf("\t Valor del caracter es: %c \n",carac2);
  printf("\t Valor del numero real es: %lf \n",punto);
}
  
return 0;
}
