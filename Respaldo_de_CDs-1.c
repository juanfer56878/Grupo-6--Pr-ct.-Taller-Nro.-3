/** @authores: Kevin Sarango(AutorEjecución), Anghely Criollo, Juan Coronel, Cesar Romero y Emilio Bravo.
a) Calcular el número de CD’s exactos necesarios para realizar una copia de seguridad de la información almacenada
cuya capacidad se conoce en GigaBytes. Un CD virgen su capacidad de almacenamiento es de 700 MegaBytes y un
GigaByte es igual a 1024 MegaBytes.
ANALISIS Y DETERMINACIÓN DE REQUERIMIENTOS 
DATOS DE ENTRADA                                                        DATOS DE SALIDA                                      
-Cantidad en Gigabytes (cantidadGB)                                    -Número de CDs(númeroCDs)                                                                                                                                                            GB = 1024MB                                                                                                                                                                                                                                                                                                      CD=700MB
Constantes
GB=1024
CD=700
ESQUEMAS ADICIONALES Y REQUERIMIENTOS                                                    
informaciónMB = cantidadGB * GB;
informaciónMB%CD=0;
númeroCDs = informaciónMB/CD;
númeroCDs = trunc(InformaciónMB/CD) +1;  
Requerimientos 
El algoritmo me permite: 
- Calcular el número de CDs exactos necesarios para realizar una copia de seguridad de la información almacenada.
Diseño 
-Solicitar al usuario que ingrese la cantidad de información que ha de almacenar en GigaBytes.
-Transformar los GB a MB aplicando la fórmula: InformaciónMB = cantidadGB * GB;
-Mostrar los Megabytes Si: informaciónMB%CD=0 Entonces:númeroCDs = informaciónMB/CD;SINO: númeroCDs = trunc(informaciónMB/CD) +1; 
-Mostrar el número de CDs exactos necesarios.
IMPLEMENTACIÓN(ALGORITMO)
ALGORITMO Respaldo_de_CDs
VARIABLES:
Real cantidadGB, informaciónMB;
Entero númeroCDs;
CONSTANTES:
Entero GB=1024;
Entero CD=700;
INICIO 
              ESCRIBIR (“Ingrese la cantidad de información que ha de almacenar en GigaBytes:”);
              LEER(cantidadGB);
              informaciónMB = cantidadGB * GB;
              SI (informaciónMB%CD=0) ENTONCES
                      númeroCDs = informaciónMB/CD;
              SINO
                      númeroCDs = trunc(informaciónMB/CD) +1;  
              FINSI  
              ESCRIBIR (“La cantidad que desea almacenar en MegaBytes es:”, + informaciónMB);
                            ESCRIBIR (“El número de CDs exactos necesarios es:”, + númeroCDs); 
FIN */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    system("@cls||clear");
int cantidadGB, informaciónMB;
int númeroCDs;
const int GB=1024;
const int CD=700;
        printf ("Ingrese la cantidad de información que ha de almacenar en GigaBytes:");
        scanf("%d", &cantidadGB);
        informaciónMB = cantidadGB * GB;
        (void) getchar ();
        if (informaciónMB % CD==0)
        { 
            númeroCDs = informaciónMB/CD;
        }      
        else
        {
           númeroCDs = trunc(informaciónMB/CD) +1;  
        }  
        printf("La cantidad que desea almacenar en MegaBytes es:%d \n", informaciónMB);
        printf("El número de CDs exactos necesarios es:%d \n",  númeroCDs);
        printf("Autores: Kevin Sarango(AutorEjecución), Anghely Criollo, Juan Coronel, Cesar Romero y Emilio Bravo.\n");
        getchar(); 
return 0;
}

