/*
Autores: Juan Coronel(AutorEjecución), Anghely Criollo, Kevin Sarango, Cesar Romero y Emilio Bravo.

b) Calcular la acreditación y estado final obtenida a partir de las acreditaciones parciales tales como: TRABAJOS DE CLASE Y EXTRA-CLASE 2.0/2.0, 
LECCIONES Y PARTICIPACIÓN EN CLASE 2.0/2.0, APRENDIZAJE AUTÓNOMO 2.0/2.0, PROMEDIO DE EVALUACIONES (4.0/4.0). Para el estado actual de la asignatura 
fijarse en la siguiente tabla:

ACREDITACIÓN              ESTADO

7.0 EN ADELANTE           APROBADO

2.40 HASTA 6.99           EN SUSPENSO

0.0 HASTA 2.39            REPROBADO


Análisis y determinación de requerimiento: 
-----------------------------------------
Datos de entrada                                      Datos de salida 

- TrabClaseYExtclase                                 - AcreditacionF
- LeccYpartclase                                     - Mensaje indicando el Estado Final
- AprenAutonomo
- PromEvaluaciones

Esquemas adicionales: 
------------------------
Acreditacion: X̅ = X1 + X2 + Xn...  =  TrabClaseYExtclase + LeccYpartclase + AprenAutonomo + PromEvaluaciones
EstadoFinal: El estado final es si aprobó con 7.0 hasta 10.0, está en suspenso con 2.40 hasta 6.99, o reprobó con 0 hasta 2.39


Requerimientos: 
---------------
- Este algoritmo nos permite determinar la Acreditacion y verificar el  Estado Final

 Diseño: 
----------
 1) Solicitar el valor de trabajos de clase y extra-clase
 2) Solicitar el valor de lecciones y participacion en clase
 3) Solicitar el valor de aprendizaje autónomo
 4) Solicitar el valor de promedio de evaluaciones 
 5) Calcular acreditacion: AcreditacionF = TrabClaseYExtclase + LeccYpartclase + AprenAutonomo + PromEvaluaciones
 8) Mostrar los valores de la Acreditacion
 6) Verificar el estado final:
     
    Si Acreditacion >=  7.0 entonces escribir ("APROBADO");
      sino escribir ("EN SUSPENSO")

    Si Acreditacion >=  2.40 & Acreditacion <= 6.99 entonces escribir ("EN SUSPENSO");
      sino escribir ("REPROBADO")

    Si Acreditacion >=  0.0 & Acreditacion <= 2.39 entonces escribir ("REPROBADO");
      sino escribir ("REPROBADO")

 Implementación 
---------------------
Inicio 

 Variables 
 
 Real TrabClaseYExtclase, LeccYpartclase, AprenAutonomo, PromEvaluaciones, AcreditacionF;

Escribir (“Ingrese el valor de de trabajos de clase y extra-clase: ”);
 Leer (TrabClaseYExtclase); 
Escribir (“Ingrese el valor de lecciones y participacion en clase: ”);
 Leer (LeccYpartclase); 
Escribir (“Ingrese el valor de aprendizaje autónomo: ”);
 Leer (AprenAutonomo); 
Escribir (“Ingrese el valor de promedio de evaluaciones: ”);
 Leer (PromEvaluaciones); 

 AcreditaccionF = TrabClaseYExtclase + LeccYpartclase + AprenAutonomo + PromEvaluacciones;
 
  Si Acreditacion >= 7.0 entonces
    Escribir ("Está APROBADO, su puntaje de acreditación es:");
    Leer (AcreditacionF); 
  sino

  Si Acreditacion >=  2.40 & Acreditacion <= 6.99 entonces
    Escribir ("Está EN SUSPENSO, su puntaje de acreditación es:");
    Leer (AcreditacionF); 
  sino

  Si Acreditacion >= 0.0 && Acreditacion <= 2.33 entonces
    Escribir ("Está REPROBADO, su puntaje de acreditación es:");
    Leer (AcreditacionF); 

    Escribir ("Ingrese bien los datos:");

  fin_si

FIN   */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

 float TrabClaseYExtclase, LeccYpartclase, AprenAutonomo, PromEvaluaciones, AcreditacionF;

    printf("Ingrese el valor de de trabajos de clase y extra-clase:");
    scanf("%f",&TrabClaseYExtclase);

    printf("Ingrese el valor de lecciones y participacion en clase:");
    scanf("%f",&LeccYpartclase);

    printf("Ingrese el valor de aprendizaje autónomo:");
    scanf("%f",&AprenAutonomo);

    printf("Ingrese el valor de promedio de evaluaciones:");
    scanf("%f",&PromEvaluaciones);
    
    AcreditacionF = TrabClaseYExtclase + LeccYpartclase + AprenAutonomo + PromEvaluaciones;

    if ( AcreditacionF >= 7.0)
    {
        printf("Está APROBADO, su puntaje de acreditación es: %.2f \n", AcreditacionF);
    }
    else 
     if (AcreditacionF >=  2.40 && AcreditacionF <= 6.99)
    {
        printf("Está EN SUSPENSO, su puntaje de acreditación es: %.2f \n", AcreditacionF);
    }
    else 
     if (AcreditacionF >= 0.00 && AcreditacionF <= 2.39  )
    {
        printf("Está REPROBADO, su puntaje de acreditación es: %.2f \n", AcreditacionF);
    }
    else
    {
      printf("Ingrese bien los datos \n");
    }
    getchar ();
    
    return 0;
}