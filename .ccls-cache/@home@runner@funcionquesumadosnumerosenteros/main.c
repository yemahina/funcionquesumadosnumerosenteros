#include <stdio.h>//librerias

int suma(int num1, int num2);//declaro la funcion suma

int main() {// funcion principal main
  int i;//declaro variable i
  int j;
 

  scanf("%d", &i);//pido al usuario insertar una cantidad que va a cambiar en i
  scanf("%d", &j);

  printf("%d",suma(i, j));//imprime un entero que va a tomar de opeSuma(i,j)

 
}

int suma(int num1, int num2){//inicializo mi funcion 
  int x = num1;
  int y = num2;
  int resultado = num1 + num2;

  return resultado;
}