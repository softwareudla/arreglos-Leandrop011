#include <stdio.h>
#include <string.h>
int main () {
    char estudiante[5][100];
    char asignaturas [3][100] = {"calculo", "fisica", "biologia"};
    int  aprobados, reprobados;
    float notas[5][3], suma = 0, promedio[5], asigT[3], sum = 0;
    float notaAlt[3], notaBaj[3];
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        printf("Por favor Ingrese los Nombres de los Estudiantes: ");fgets(estudiante[i], sizeof(estudiante[i]), stdin);
    }

    
    for (j = 0; j < 3; j++) {
        printf("\nPor favor Ingrese las Notas de la Asignatura de %s\n", asignaturas[j]);
        sum = 0;
    
        notaAlt[j] = -1;
        notaBaj[j] = 11;

         for (i = 0; i < 5; i++) {

            do {
                printf("Estudiante %s - ", estudiante[i]);
                scanf("%f", &notas[i][j]);

                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota invalida. Ingrese una nota entre 0 y 10.\n");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);

            sum  = sum + notas[i][j];

           
            if (notas[i][j] > notaAlt[j]) {
                notaAlt[j] = notas[i][j];
            }
            if (notas[i][j] < notaBaj[j]) {
                notaBaj[j] = notas[i][j];
            }
        }
        asigT[j] = sum / 5; 
    }


     for (i = 0; i < 5; i++) {
        suma = 0;
        for (j = 0; j < 3; j++) {
            suma = suma + notas[i][j]; 
        }

        promedio[i] = suma / 3.0;
    }

    printf("\n===================================================================="); 
    printf("\nEl promedio total de cada estudiantes segun sus notas de asignaturas es: ");
    printf("\n====================================================================");  

    for (i = 0; i < 5; i++) {
        printf("\nEstudiante %s:\n", estudiante[i]);
        for (j = 0; j < 3; j++) {
            printf("  Asignatura %s: %.2f\n", asignaturas[j], notas[i][j]);
        }
        printf("Promedio Total: %.2f\n", promedio[i]);
    }

   printf("\n==================================================================="); 
   printf("\nEl promedio de las asignatura segun las notas de los estudiantes es: ");
   printf("\n==================================================================="); 

    for ( j = 0; j < 3; j++)
    {
        printf("\nAsignatura %s", asignaturas[j]);
        printf(": %.2f", asigT[j]);
    }
    
   printf("\n==================================================="); 
   printf("\nEl Nota mas alta y baja de cada Asignatura:  ");
   printf("\n===================================================");

    for (j = 0; j < 3; j++) {
        printf("\nAsignatura %s:\n", asignaturas[j]);
        printf("  Nota mas alta: %.2f\n", notaAlt[j]);
        printf("  Nota mas baja: %.2f\n", notaBaj[j]);
    }

    printf("\n=================================================================="); 
    printf("\nCantidad de Estudiantes Aprobados y Reprobados de cada Asignatura:  ");
    printf("\n==================================================================");

    for ( j = 0; j < 3; j++)
    {
        printf("\n");
        printf("\nAsignatura %s:", asignaturas[j]);
        aprobados = 0;
        reprobados = 0;
    for (i = 0; i < 5; i++) {
        if (notas[i][j] >= 6)
        {
            aprobados = aprobados + 1;
        }else if(notas[i][j] <= 6){
            reprobados = reprobados + 1;
        }  
    }
        printf("\nAprobados: %i estudiantes", aprobados);
        printf("\nReprobados: %i estudiantes", reprobados);
    }
    printf("\n");
    return 0;
}