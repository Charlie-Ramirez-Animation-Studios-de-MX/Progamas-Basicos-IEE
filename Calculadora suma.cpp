//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 08:23 p. m. 21/10/2019
//Calculadora Suma con 2 Decimales
#include<stdio.h>
#include<conio.h>
float num1,num2,suma;
main()
{
	printf("teclea primer numero:  ");
	scanf("%f",&num1);
		printf("Teclea Segundo numero:  ");
		scanf("%f",&num2);
		//Para Intercambiar entre mult y Div. solo se cambia el Signo de Suma "+" de la Linea NUMERO: 14
//PUEDES CAMBIAR LA VARIABLE "SUMA" SIN EMBARGO NO ES NECESARIO, NO ALTERA LA OPERACION. solo es importante el signo
		suma=(num1+num2);  //<-----AQUI ES EL SIGNO QUE HAY QUE CAMBIAR SOLAMENTE
		printf("Tu resultado es: %.2f",suma);
		getch();
	
}

//plox beibi Borra estas lineas // o cambialas
