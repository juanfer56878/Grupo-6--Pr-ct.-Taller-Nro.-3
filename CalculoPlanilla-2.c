/*
c) Calcular la planilla a pagar para un trabajador por sus horas de trabajo, para la cual posee las siguientes restricciones: Si trabaja 40 horas o menos
se le paga $16 por cada hora. Si trabaja más de 40 horas se le paga $16 cada hora de las primeras 40 horas y $5 adicional por cada hora extra.
ANÁLISIS Y DETERMINACIÓN REQUERIMIENTOS
Datos de entrada                                                                     Datos de salida      
-horasTrabajo                                                                             -horasExtra
                                                                                          -planillaPagar
Requerimientos
Determinar la planilla a pagar para un trabajador por sus horas de trabajo.
Esquemas adicionales
PlanillaPagar= horasTrabajo*16;
horasExtra=horasTrabajo-40;
PlanillaPagar= (40*16+horasExtra*5);
DISEÑO
1.	Solicitar al usuario que ingrese el número de horas trabajadas.
2.	Si las horas de trabajo son menores o iguales a 40 entonces aplicar la fórmula: (planillaPagar*16).
3.	Si las horas de trabajo son mayores a 40 entonces aplicar las fórmulas: (horasExtra=horasTrabajo-40) y (planillaPagar = (40*16) + (horasExtra*5). 
4.	Mostrar la planilla a pagar al trabajador.
IMPLEMENTACIÓN (ALGORITMO – PSEUDO-CÓDIGO)
ALGORITMO CalculoPlanilla
VARIABLES
Real horasTrabajo;
Real horasExtra, planillaPagar; 
 INICIO
                    ESCRIBIR (“Ingrese el número de horas trabajadas:”)
                    LEER(horasTrabajo)
                    SI horasTrabajo<=40 ENTONCES
                    planillaPagar= horasTrabajo*16;
                     SI horasTrabajo>40 ENTONCES
                     horasExtra=horasTrabajo-40;
                     PlanillaPagar= (40*16 + horasExtra*5);
                     FINSI
                     FINSI
                     ESCRIBIR ("La planilla a pagar es:", + planillaPagar);
FIN    

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float horasTrabajo;
float horasExtra, planillaPagar; 
   printf("Ingrese el número de horas trabajadas:");
   scanf("%f", &horasTrabajo);
   if (horasTrabajo<=40)
   {
        planillaPagar= (horasTrabajo*16);
   }
   if (horasTrabajo>40)
   {
        horasExtra=(horasTrabajo-40);
        planillaPagar= (40*16+horasExtra*5);
   }

   printf ("La planilla a pagar es:%.2f \n",  planillaPagar);
   printf("Autores:Autores: Kevin Sarango, Anghely Criollo, Juan Coronel, Cesar Romero(AutorEjecución) y Emilio Bravo.\n ");
   return 0;
}
