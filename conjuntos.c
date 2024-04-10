/*
 *   Teoría de Conjuntos y Operaciones de Conjuntos.
 *   Miguel Marines
 */


// Librerías
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conjuntos.h"

int main() {
    
    srand(time(0));
    
    int opcion, universo[20], cardinalidad, flagGenerados = 0;
    int conjunto1[7], conjunto2[5], conjunto3[3];
    int primerConjunto, segundoConjunto;
    int d;

    do{
        // Menu
        printf("\n");
        printf("\n1. Mostrar Conjunto Universo\n");
        printf("2. Generar Conjuntos\n");
        printf("3. Mostrar Conjuntos Generados\n");
        printf("4. Union\n");
        printf("5. Interseccion\n");
        printf("6. Diferencia\n");
        printf("7. Complemento\n");
        printf("8. Conjunto Potencia\n");
        printf("9. Producto Cartesiano\n");
        printf("10. Igualdad\n");
        printf("11. Subconjuntos \n");
        printf("12. Subconjuntos Propios\n");
        printf("13. Salir\n ");
        // Selección de la opción del menu.
        printf("\nIntroduzca la opcion deseada: ");
        scanf("%i%*c", &opcion);

        switch(opcion) {
            case 1: {
                // Funciones
                generaUniverso(universo);
                muestraUniverso(universo);
                break;
            }
            case 2: {
                // Funciones
                generarValoresConjunto1(conjunto1);
                generarValoresConjunto2(conjunto2);
                generarValoresConjunto3(conjunto3);
                flagGenerados = 1;
                break;
            }
            case 3: {
                if(flagGenerados == 1) {
                    // Funciones
                    imprimirConjuntoU(universo);
                    imprimirConjunto1(conjunto1);
                    imprimirConjunto2(conjunto2);
                    imprimirConjunto3(conjunto3);
                    break;
                }
                else {
                    // Warning
                    printf("\nElige primero Generar conjuntos desde el menu para continuar");
                }
                break;
            }
            case 4: {
                // Funciones
                union1(conjunto1,conjunto2);
                union2(conjunto2,conjunto3);
                union3(conjunto1, conjunto3);
                break;
            }
            case 5: {
                if(flagGenerados == 1) {
                    // Funciones
                    interseccion12(conjunto1, conjunto2);
                    interseccion13(conjunto1, conjunto3);
                    interseccion23(conjunto2, conjunto3);
                }
                else {
                    // Warning
                    printf("\nElige primero Generar conjuntos desde el menu para continuar");
                }
                break;
            }
            case 6:
                // Función
                diferencia(conjunto1, conjunto2, conjunto3);
                break;
            case 7: {
                // Funciones
                printf("\n Complemento Conjunto 1 : ");
                complemento1(universo, conjunto1);
                printf("\n Complemento Conjunto 2 : ");
                complemento2(universo, conjunto2);
                printf("\n Complemento Conjunto 3 : ");
                complemento3(universo, conjunto3);
                break;
            }
            case 8: {
                // Funciones
                printf("\nConjunto potencia de 1: ");
                conjuntoPotencia1(conjunto1);
                printf("\nConjunto potencia de 2: ");
                conjuntoPotencia2(conjunto2);
                printf("\nConjunto potencia de 3: ");
                conjuntoPotencia3(conjunto3);
                break;
            }
            case 9:{
                // Funciones
                pC1x2(conjunto1,conjunto2);
                pC1x3(conjunto1,conjunto3);
                pC2x3(conjunto2,conjunto3);
                break;
            }
            case 10:{
                // Funciones
                printf("\n");
                igualdadU(universo,conjunto1,conjunto2,conjunto3);
                printf("\n");
                igualdadC1(universo,conjunto1,conjunto2,conjunto3);
                printf("\n");
                igualdadC2(universo,conjunto1,conjunto2,conjunto3);
                printf("\n");
                igualdadC3(universo,conjunto1,conjunto2,conjunto3);
                printf("\n");
                break;
            }
            case 11: {
                // Funciones
                printf("\nSubconjunto del Conjunto Universo :\n");
                imprimirSConjunto1(conjunto1);
                imprimirSConjunto2(conjunto2);
                imprimirSConjunto3(conjunto3);
                printf("\nSubconjunto del Conjunto 1 :\n");
                imprimirSConjunto11(conjunto1);
                printf("\nSubconjunto del Conjunto 2 :\n");
                imprimirSConjunto22(conjunto2);
                printf("\nSubconjunto del Conjunto 3 :\n");
                imprimirSConjunto33(conjunto3);
                break;
            }
            case 12: {
                // Funciones
                printf("\nSubconjuntos Propios del Conjunto Universo :\n");
                imprimirSConjunto1(conjunto1);
                imprimirSConjunto2(conjunto2);
                imprimirSConjunto3(conjunto3);
                printf("\nSubconjunto Propio del Conjunto 1 :\n");
                imprimirSConjunto11(conjunto1);
                printf("\nSubconjunto Propio del Conjunto 2 :\n");
                imprimirSConjunto22(conjunto2);
                printf("\nSubconjunto Propio del Conjunto 3 :\n");
                imprimirSConjunto33(conjunto3);
                break;
            }

        }
    } while (opcion != 13);
}
