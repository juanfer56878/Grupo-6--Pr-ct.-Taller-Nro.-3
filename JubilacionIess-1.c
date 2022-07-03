/*
Autores: Juan Coronel, Anghely Criollo(AutorEjecución), Kevin Sarango, Cesar Romero y Emilio Bravo.

e)  El IESS requiere clasificar a las personas que se jubilaran para el presente año. Existen tres tipos de 
jubilaciones: por edad, por antigüedad joven y por antigüedad adulta. Las personas adscritas a la jubilación 
por edad deben tener 60 años o más y una antigüedad en su empleo de menos de 25 años. Las personas adscritas 
a la jubilación por antigüedad joven deben tener menos de 60 años y una antigüedad en su empleo de 25 años o 
más. Las personas adscritas a la jubilación por antigüedad adulta deben tener 60 años o más y una antigüedad 
en su empleo de 25 años o más. Determinar en qué tipo de jubilación, quedara adscrita una persona.

Análisis y determinación de requerimiento: 
-----------------------------------------
Datos de entrada                                          Datos de salida 
- edad (edad)                                             - mensaje indicando tipo de jubilacion 
- Años de empleo (añosTrabajando)                           

Esquemas adicionales: 
------------------------

- Las personas adscritas a la jubilación por edad deben tener 60 años o más y una antigüedad en su empleo de menos de 25 años

       PorEdad = Edad >= 60 && 25 < añosTrabajando

- Las personas adscritas a la jubilación por antigüedad joven deben tener menos de 60 años y una antigüedad en su empleo de 25 años o más.

       PorAntiguedadJoven =  Edad < 60 && 25 >= añosTrabajando

- Las personas adscritas a la jubilación por antigüedad adulta deben tener 60 años o más y una antigüedad en su empleo de 25 años o más

       PorAinguedadAdulta =  Edad >= 60 && 25 >= añosTrabajando

Requerimientos: 
---------------
- Este algoritmo nos permite determinar el tupo de jubilaccion de las personas 


 Diseño: 
----------
 1) Solicitar el valor de Años de empleo 
 2) Solicitar el valor de Edad
     
    Si Edad >= 60 && 25 < añosTrabajando entonces escribir ("Usted pertenece al grupo de jubilación por edad.");
       
      sino

    Si Edad < 60 && 25 >= añosTrabajando entonces escribir ("Usted pertenece al grupo de jubilación por antigüedad joven.");
       
      sino

    Si Edad >= 60 && 25 >= añosTrabajando entonces escribir ("Usted pertenece al grupo de jubilación por antigüedad adulta");
       
      sino Escribir ("Usted no pertenece a ningún grupo de jubilación");

 Implementación 
---------------------
Inicio 

Algoritmo IESS
	Definir Edad Como Entero
	Definir añosTrabajando Como Entero
        Definir adscritosJubilaciónPorEdad = 60;
        Definir JubilacionPorEdadTrabajando = 25;
        Definir adscritosJubilacionPorAntigüedadEdadJoven = 60;
        Definir JubilacionPorAntigüedadJovenTrabajando = 25;
        Definir adscritosJubilacionPorAntigüedadEdadAdulta = 60;
        Definir JubilacionPorAntigüedadAdultaEdadTrabajando = 25;

	
	Escribir ("Ingrese el número de años que usted lleva trabajando en la empresa:");
	Leer  añosTrabajando
	Escribir ("Ingrese su edad actual: ");
	Leer Edad
	SI Edad >= 60 & añosTrabajando < 25 Entonces
		Escribir  ("Usted pertenece al grupo de jubilación por edad.");
	Sino 
		Si  Edad < 60 & añosTrabajando >= 25 Entonces
			Escribir  ("Usted pertenece al grupo de jubilación por antigüedad joven. ");
		SiNo
			Si Edad >= 60 & añosTrabajando >= 25 Entonces
				Escribir  ("Usted pertenece al grupo de jubilación por antigüedad adulta.");
		SiNo
		  Escribir  ("/n");
		 FinSi
	     FinSi
	FinSi	

FIN   */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system("@cls||clear");
    int Edad, añosTrabajando;
    #define adscritosJubilaciónPorEdad = 60;

    #define JubilacionPorEdadTrabajando = 25;

    #define adscritosJubilacionPorAntigüedadEdadJoven = 60;

    #define JubilacionPorAntigüedadJovenTrabajando = 25;

    #define adscritosJubilacionPorAntigüedadEdadAdulta = 60;

    #define JubilacionPorAntigüedadAdultaEdadTrabajando = 25;

    printf("Ingrese el número de años que usted lleva trabajando en la empresa:");
    scanf("%d", &añosTrabajando);
    printf("Ingrese su edad actual:");
    scanf("%d", &Edad);

    if (Edad >= 60 && añosTrabajando < 25)
    {
        printf("Usted pertenece al grupo de jubilación por edad. \n");
    }
    if (Edad < 60 && añosTrabajando >= 25)
    {
            printf("Usted pertenece al grupo de jubilación por antigüedad joven. \n");
    }

    if (Edad >= 60 && añosTrabajando >= 25)
    {
         printf("Usted pertenece al grupo de jubilación por antigüedad adulta. \n");
    }
    else
    {
        printf("\n");
    }
    printf("Autores: Kevin Sarango, Anghely Criollo(AutorEjecución), Juan Coronel, Cesar Romero y Emilio Bravo.\n ");
       
    return 0;
}
