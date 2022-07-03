/*
ANALISIS Y DETERMINARCION DE REQUERIMIENTOS
DATOS DE ENTRADA                    DATOS DE SALIDA
CantidadDeLlantas                         PagoTotal    

ESQUEMA ADICIONAL
•CantidadDeLlantas < 5
PagoTotal = CantidadDeLlantas*800

•Cantidad de llantas >= 5 && cantidad < 8
PagoTotal = CantidadDeLlantas*700

•CantidadDeLlantas > 8
PagoTotal = CantidadDeLlantas * 560
REQUERIMIENTOS
El Algoritmo nos va a poder Permitir:
•Calcular el PagoTotal de llantas aplicando las fórmulas del Esquema Adicional para sacar el pago dependiendo la cantidad de llantas
DISEÑO
1.	Solicitar la CantidadDeLlantas
2.	Aplicar Formulas de Esquema Adicional
3.	Mostrar Resultado

IMPLEMENTACION
AlGORITMO Llanta
	Definir CantidadDeLlantas Como Entero
	Definir  PagoTotal Como Real
Escribir ("Ingresar la Cantidad de llantas a comprar: ");
Leer CantidadDeLlantas;
SI CantidadDeLlantas < 5 Entonces
	PagoTotal = CantidadDeLlantas*800
Sino 
	Si CantidadDeLlantas >= 5 & CantidadDeLlantas <8 Entonces
		PagoTotal = CantidadDeLlantas*700
	SiNo
		Si CantidadDeLlantas > 8 Entonces
			PagoTotal = CantidadDeLlantas * 560
		FinSi
	FinSi
FinSi
Escribir ("El PagoTotal es: "), PagoTotal;
FinAlgoritmo
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

 int CantidadDeLLantas;
 float PagoTotal;

    printf("Ingresar la Cantidad de Llantas a Comprar:  ");
    scanf("%d",&CantidadDeLLantas);

    if ( CantidadDeLLantas < 5){
        (PagoTotal = CantidadDeLLantas * 800);
    }
    else 
     if (CantidadDeLLantas>= 5 && CantidadDeLLantas< 8){
        (PagoTotal=CantidadDeLLantas * 700);
    }
    else 
     if (CantidadDeLLantas > 8){
        (PagoTotal=CantidadDeLLantas * 560);
    }

    printf("El Pago Total es: %2.f\n",PagoTotal);
    printf ("Autores: Emilio Bravo,Juan Coronel,Kevin Sarango,Anghely Criollo,Cesar Romero");
}