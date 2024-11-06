#include <stdio.h>
#include <string.h>
int main () {
    char estudiante[5][100];
    int asignaturas [3];
    float notas[5][3], suma = 0, promedio[5], asigT[3], sum = 0;
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        printf("Por favor Ingrese los Nombres de los Estudiantes: ");fgets(estudiante[i], sizeof(estudiante[i]), stdin);
    }

    
     for ( j = 0; j < 3; j++)
    {
        printf("Por favor Ingrese las Notas de la Asignatura %i", j + 1);
        sum = 0;
        for ( i = 0; i < 5; i++)
        {
            printf("\nEstudiante %s- ", estudiante[i]);
            scanf("%f", &notas[i][j]);
            sum = sum + notas[i][j];
        }
         asigT[j] = sum / 5 ;
    }

     for (i = 0; i < 5; i++) {
        suma = 0;
        for (j = 0; j < 3; j++) {
            suma = suma + notas[i][j]; 
        }

        promedio[i] = suma / 3.0; 
       
    }

    printf("\n========================================================"); 
    printf("\nEl promedio de cada estudiantes por asignatura es: ");
    printf("\n========================================================");  

    for (i = 0; i < 5; i++) {
        printf("\nEstudiante %s:\n", estudiante[i]);
        for (j = 0; j < 3; j++) {
            printf("  Asignatura %d: %.2f\n", j + 1, notas[i][j]);
        }
        printf("Promedio Total: %.2f\n", promedio[i]);
    }

   printf("\n========================================================"); 
   printf("\nEl promedio por asignatura de todos los estudiantes es: ");
   printf("\n========================================================"); 

    for ( j = 0; j < 3; j++)
    {
        printf("\nAsignatura %i", j + 1);
        printf(": %.2f", asigT[j]);
    }
    

    
    return 0;
}