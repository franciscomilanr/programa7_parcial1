/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Realizado: 10/02/2022
Ciclo: 01/2022
Descripcion: Programa 7 en C que simula una tienda de Arduinos, en dicha tienda existen promociones,
si se llevan minimo 5 arduinos se hace el 15% de descuento, en cualquier compra es de 5%, si
lleva 10 o mas sera de 25% de descuento,  cada Arduino tiene un costo de $350.00
El programa pide la cantidad de arduinos y calculara el total a pagar para la materia programacion estrcuturada

*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	 //Declaracion
	 int arduinos;
	 float total, descuento=0;
	 //Entrada de datos
	 printf("Cantidad de arduinos: ");
	 scanf("%d",&arduinos);
	 //Procedimiento
	 total=arduinos*350.0;
	 if (arduinos>9) {
		descuento=total*0.25;
	 }
	 else if (arduinos>4 ) {
		descuento=total*0.15;
	 }
	 else {
		descuento=total*0.05;
	 }
	 printf(" Subtotal:   $%10.2f\n",total);
	 printf(" Descuento: -$%10.2f\n", descuento);
	 printf("-----------------------------\n");
	 printf(" Total:      $%10.2f", total-descuento);
	 //Retorno
	 return 0;
}