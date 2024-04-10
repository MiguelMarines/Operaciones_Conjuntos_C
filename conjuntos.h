/*
 *   Teoría de Conjuntos y Operaciones de Conjuntos.
 *   Miguel Marines
 */


// Función Generar Universo
void generaUniverso(int universo[20]) {
    int i;
    printf("\n");
    for(i = 0; i < 20; i++) {
        universo[i] = i + 1;
    }
}

// Función Mostrar Universo
void muestraUniverso(int universo[]) {
    int i;
    for(i = 0; i < 20; i++){
        printf("%i ", universo[i]);
    }
}

// Función Generar Valores Conjunto
void generarValoresConjunto1(int conjunto1[7]) {
    int i, j, k;
    for(i = 0; i < 7; i++) {
        conjunto1[i] = rand() % 20 + 1;
    }
}

// Función Generar Valores Conjunto
void generarValoresConjunto2(int conjunto2[5]) {
    int i, j, k;
    for(i = 0; i < 5; i++) {
        conjunto2[i] = rand() % 20 + 1;
    }
}

// Función Generar Valores Conjunto
void generarValoresConjunto3(int conjunto3[3]) {
    int i, j, k;
    for(i = 0; i < 3; i++) {
        conjunto3[i] = rand() % 20 + 1;
    }
}

// Función Imprimir Conjunto Universo
void imprimirConjuntoU(int universo[20]) {
    printf("\nConjunto Universo: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20\n");
}

// Función Imprimir Subconjunto
void imprimirSConjunto1(int conjunto1[7]) {
    int i;
    printf("\nSubonjunto 1: ");
    for(i = 0; i < 7; i++) {
        printf("%i ", conjunto1[i]);
    }
    printf("\n");
}

// Función Imprimir Subconjunto
void imprimirSConjunto2(int conjunto2[5]) {
    int i;
    printf("\nSubbonjunto 2: ");
    for(i = 0; i < 5; i++) {
        printf("%i ", conjunto2[i]);
    }
    printf("\n");
}

// Función Imprimir Subconjunto
void imprimirSConjunto3(int conjunto3[3]) {
    int i;
    printf("\nSubonjunto 3: ");
    for(i = 0; i < 3; i++) {
        printf("%i ", conjunto3[i]);
    }
    printf("\n");
}

// Función Imprimir Conjunto
void imprimirConjunto1(int conjunto1[7]) {
    int i;
    printf("\nConjunto 1: ");
    for(i = 0; i < 7; i++) {
        printf("%i ", conjunto1[i]);
    }
    printf("\n");
}

// Función Imprimir Conjunto
void imprimirConjunto2(int conjunto2[5]) {
    int i;
    printf("\nConjunto 2: ");
    for(i = 0; i < 5; i++) {
        printf("%i ", conjunto2[i]);
    }
    printf("\n");
}

// Función Imprimir Conjunto
void imprimirConjunto3(int conjunto3[3]) {
    int i;
    printf("\nConjunto 3: ");
    for(i = 0; i < 3; i++) {
        printf("%i ", conjunto3[i]);
    }
    printf("\n");
}


// Función Intersección Conjuntos
void interseccion12(int conjunto1[7], int conjunto2[5]) {
    int i, j;
    printf("\nConjunto 1 interseccion Conjunto 2: ");
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 5; j++) {
            if(conjunto1[i] == conjunto2[j]){
                printf("%i ", conjunto1[i]);
            }
        }
    }
}

// Función Intersección Conjuntos
void interseccion13(int conjunto1[7], int conjunto3[3]) {
    int i, j;
    printf("\nConjunto 1 interseccion Conjunto 3: ");
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 3; j++) {
            if(conjunto1[i] == conjunto3[j]){
                printf("%i ", conjunto1[i]);
            }
        }
    }
}

// Función Intersección Conjuntos
void interseccion23(int conjunto2[5], int conjunto3[3]) {
    int i, j;
    printf("\nConjunto 2 interseccion Conjunto 3: ");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            if(conjunto2[i] == conjunto3[j]){
                printf("%i ", conjunto2[i]);
            }
        }
    }
}

// Función Complemento
void complemento1(int universo[20],int conjunto1[7]) {
    int k, i, j, l;
    int complemento1[20];

    for(k = 0; k < 20; k++) {
        complemento1[k] = universo[k];
    }

    for(i = 0; i < 20; i++) {
        for(j = 0; j < 7; j++) {
            if(complemento1[i] == conjunto1[j]) {
                complemento1[i] = 0;
            }
        }
    }

    for(l = 0; l < 20; l++) {
        if(complemento1[l] != 0) {
            printf("%i ", complemento1[l]);
        }
    }
}

// Función Complemento
void complemento2(int universo[20],int conjunto2[5]) {
    int k, i, j, l;
    int complemento2[20];

    for(k = 0; k < 20; k++) {
        complemento2[k] = universo[k];
    }

    for(i = 0; i < 20; i++) {
        for(j = 0; j < 5; j++) {
            if(complemento2[i] == conjunto2[j]) {
                complemento2[i] = 0;
            }
        }
    }

    for(l = 0; l < 20; l++) {
        if(complemento2[l] != 0) {
            printf("%i ", complemento2[l]);
        }
    }
}

// Función Complemento
void complemento3(int universo[20],int conjunto3[3]) {
    int k, i, j, l;
    int complemento3[20];

    for(k = 0; k < 20; k++) {
        complemento3[k] = universo[k];
    }

    for(i = 0; i < 20; i++) {
        for(j = 0; j < 3; j++) {
            if(complemento3[i] == conjunto3[j]) {
                complemento3[i] = 0;
            }
        }
    }
    
    for(l = 0; l < 20; l++) {
        if(complemento3[l] != 0) {
            printf("%i ", complemento3[l]);
        }
    }
}

// Función Conjunto Potencia
void conjuntoPotencia1(int conjunto1[7]) {
    int i;
    printf("\n{{0}, {%i}, {%i}, {%i}, {%i}, {%i}, {%i}, {%i}, \n", conjunto1[0], conjunto1[1], conjunto1[2], conjunto1[3], conjunto1[4], conjunto1[5], conjunto1[6]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, ", conjunto1[0], conjunto1[1], conjunto1[0], conjunto1[2], conjunto1[0], conjunto1[3]);
    printf("{%i, %i}, {%i, %i}, {%i, %i},\n", conjunto1[0], conjunto1[4], conjunto1[0], conjunto1[5], conjunto1[0], conjunto1[6]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, {%i, %i}, {%i, %i}, \n", conjunto1[1], conjunto1[2], conjunto1[1], conjunto1[3], conjunto1[1], conjunto1[4], conjunto1[1], conjunto1[5], conjunto1[1], conjunto1[6]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, {%i, %i},\n", conjunto1[2], conjunto1[3], conjunto1[2], conjunto1[4], conjunto1[2], conjunto1[5], conjunto1[2], conjunto1[6]);
    printf("{%i, %i}, {%i, %i}, {%i, %i},\n", conjunto1[3], conjunto1[4], conjunto1[3], conjunto1[5], conjunto1[3], conjunto1[6]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, \n", conjunto1[4], conjunto1[5], conjunto1[4], conjunto1[6], conjunto1[5], conjunto1[6]);
    printf("{%i, %i, %i}} \n", conjunto1[4], conjunto1[5], conjunto1[4]);
}

// Función Conjunto Potencia
void conjuntoPotencia2(int conjunto2[5]) {
    printf("\n{{0}, {%i}, {%i}, {%i}, {%i}, {%i}, \n", conjunto2[0], conjunto2[1], conjunto2[2], conjunto2[3], conjunto2[4]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, {%i, %i}, \n", conjunto2[0], conjunto2[1], conjunto2[0], conjunto2[2], conjunto2[0], conjunto2[3], conjunto2[0], conjunto2[4]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, \n", conjunto2[1], conjunto2[2], conjunto2[1], conjunto2[3], conjunto2[1], conjunto2[4]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, \n", conjunto2[2], conjunto2[3], conjunto2[2], conjunto2[4], conjunto2[3], conjunto2[4]);
    printf("{%i, %i, %i}, {%i, %i, %i}, ", conjunto2[1], conjunto2[2], conjunto2[3], conjunto2[1], conjunto2[2], conjunto2[4]);
    printf("{%i, %i, %i}, \n{%i, %i, %i}, {%i, %i, %i},  \n", conjunto2[0], conjunto2[2], conjunto2[3], conjunto2[0], conjunto2[2], conjunto2[4], conjunto2[2], conjunto2[3], conjunto2[4]);
    printf("{%i, %i, %i, %i}, {%i, %i, %i, %i}, {%i, %i, %i, %i},  \n", conjunto2[0], conjunto2[1], conjunto2[2], conjunto2[3], conjunto2[0], conjunto2[1], conjunto2[2], conjunto2[4], conjunto2[1], conjunto2[2], conjunto2[3], conjunto2[4]);
    printf("{%i, %i, %i, %i, %i}} \n", conjunto2[0], conjunto2[1], conjunto2[2], conjunto2[3], conjunto2[4]);
}

// Función Conjunto Potencia
void conjuntoPotencia3(int conjunto3[3]) {
    printf("\n{{0}, {%i}, {%i}, {%i}, \n", conjunto3[0], conjunto3[1], conjunto3[2]);
    printf("{%i, %i}, {%i, %i}, {%i, %i}, ", conjunto3[0], conjunto3[1], conjunto3[0], conjunto3[2], conjunto3[1], conjunto3[2]);
    printf("{%i, %i, %i}} \n", conjunto3[0], conjunto3[1], conjunto3[2]);
}

// Función Imprimir Subconjunto
void imprimirSConjunto11(int conjunto1[7]) {
    int i;
    printf("\nSubconjunto : ");
    for(i = 0; i < 6; i++) {
        printf("%i ", conjunto1[i]);
    }
    printf("\n");
}

// Función Imprimir Subconjunto
void imprimirSConjunto22(int conjunto2[5]) {
    int i;
    printf("\nSubconjunto : ");
    for(i = 0; i < 3; i++) {
        printf("%i ", conjunto2[i]);
    }
    printf("\n");
}

// Función Imprimir Subconjunto
void imprimirSConjunto33(int conjunto3[3]) {
    int i;
    printf("\nSubconjunto : ");
    for(i = 0; i < 2; i++) {
        printf("%i ", conjunto3[i]);
    }
    printf("\n");
}

// Función Diferencia
void diferencia(int conjunto1[7], int conjunto2[5], int conjunto3[3]){
    int i, j;
    int aux[7];
    int acum = 0;
    int bandera = 0;

    printf("Diferencia de conjunto 1 y conjunto 2: ");
    for(i = 0; i < 7; i++) {
        bandera = 1;
        for(j = 0; j < 5; j++) {
            if(conjunto1[i] == conjunto2[j]) {
                bandera = 0;
            }
        }
        if(bandera == 1) {
            printf("%i ", conjunto1[i]);
        }

    }
    
    printf("\nDiferencia de conjunto 1 y conjunto 3: ");
    for(i = 0; i < 7; i++) {
        bandera = 1;
        for(j = 0; j < 3; j++) {
            if(conjunto1[i] == conjunto3[j]) {
                bandera = 0;
            }
        }
        if(bandera == 1) {
            printf("%i ", conjunto1[i]);
        }

    }

    printf("\nDiferencia de conjunto 2 y conjunto 3: ");
    for(i = 0; i < 5; i++) {
        bandera = 1;
        for(j = 0; j < 3; j++) {
            if(conjunto2[i] == conjunto3[j]) {
                bandera = 0;
            }
        }
        if(bandera == 1) {
            printf("%i ", conjunto2[i]);
        }

    }
}

// Función Igualdad
void igualdadU(int universo[20], int conjunto1[7], int conjunto2[5], int conjunto3[3]) {
    if(20 == 7)
    {
        printf("Hay igualdad entre el conjunto Universo y el conjunto 1\n");
    }
    else
    {
        printf("No hay igualdad entre el conjunto Universo y el Conjunto 1\n");
    }
    if(20==5)
    {
        printf("Hay igualdad entre el conjunto Universo y el Conjunto 2\n");
    }
    else
    {
        printf("No hay igualdad entre el conjunto Universo y el Conjunto 2\n");
    }
    if(20==3)
    {
        printf("Hay igualdad entre el conjunto Universo y el Conjunto 3\n");
    }
    else
    {
        printf("No hay igualdad entre el conjunto Universo y el Conjunto 3\n");
    }
}

// Función Igualdad
void igualdadC1(int universo[20], int conjunto1[7], int conjunto2[5], int conjunto3[3]) {
    if(7 == 20)
    {
        printf("Hay igualdad entre el Conjunto 1 y el Universo \n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 1 y el Universo\n");
    }
    if(7==5)
    {
        printf("Hay igualdad entre el Conjunto 1 y el Conjunto 2\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 1 y el Conjunto 2\n");
    }
    if(7==3)
    {
        printf("Hay igualdad entre el Conjunto 1 y el Conjunto 3\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 1 y el Conjunto 3\n");
    }
}

// Función Igualdad
void igualdadC2(int universo[20], int conjunto1[7], int conjunto2[5], int conjunto3[3]) {
    if(5 == 20)
    {
        printf("Hay igualdad entre el Conjunto 2 y el Universo \n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 2 y el Universo\n");
    }
    if(5 == 7)
    {
        printf("Hay igualdad entre el Conjunto 2 y el Conjunto 1\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 2 y el Conjunto 1\n");
    }
    if(5 == 3)
    {
        printf("Hay igualdad entre el Conjunto 2 y el Conjunto 3\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 2 y el Conjunto 3\n");
    }
}

// Función Igualdad
void igualdadC3(int universo[20], int conjunto1[7], int conjunto2[5], int conjunto3[3]) {
    if(5 == 20)
    {
        printf("Hay igualdad entre el Conjunto 3 y el Universo \n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 3 y el Universo\n");
    }
    if(5 == 7)
    {
        printf("Hay igualdad entre el Conjunto 3 y el Conjunto 1\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 3 y el Conjunto 1\n");
    }
    if(5 == 3)
    {
        printf("Hay igualdad entre el Conjunto 3 y el Conjunto 2\n");
    }
    else
    {
        printf("No hay igualdad entre el Conjunto 3 y el Conjunto 2\n");
    }
}

// Función Producto Cartesiano
void pC1x2(int conjunto1[7],int conjunto2[5]) {
    printf("\nConjunto 1 X Conjunto 2\n");
    printf("{(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i), (%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i)}\n",
    conjunto1[0], conjunto2[0],conjunto1[0], conjunto2[1],conjunto1[0], conjunto2[2],conjunto1[0], conjunto2[3],conjunto1[0], conjunto2[4],conjunto1[1], conjunto2[0],conjunto1[1], conjunto2[1],conjunto1[1], conjunto2[2],conjunto1[1], conjunto2[3],conjunto1[1], conjunto2[4],conjunto1[2], conjunto2[0],conjunto1[2], conjunto2[1],conjunto1[2], conjunto2[2],conjunto1[2], conjunto2[3],conjunto1[2], conjunto2[4],conjunto1[3], conjunto2[0],conjunto1[3], conjunto2[1],conjunto1[3], conjunto2[2],conjunto1[3], conjunto2[3],conjunto1[3], conjunto2[4],conjunto1[4], conjunto2[0],conjunto1[4], conjunto2[1],conjunto1[4], conjunto2[2],conjunto1[4], conjunto2[3],conjunto1[4], conjunto2[4],conjunto1[5], conjunto2[0],conjunto1[5], conjunto2[1],conjunto1[5], conjunto2[2],conjunto1[5], conjunto2[3],conjunto1[5], conjunto2[4],conjunto1[6], conjunto2[0],conjunto1[6], conjunto2[1],conjunto1[6], conjunto2[2],conjunto1[6], conjunto2[3],conjunto1[6], conjunto2[4]);
}

// Función Producto Cartesiano
void pC1x3(int conjunto1[7],int conjunto3[3]) {
    printf("\nConjunto 1 X Conjunto 3\n");
    printf("{(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i)}\n",conjunto1[0], conjunto3[0],conjunto1[0], conjunto3[1],conjunto1[0], conjunto3[2],conjunto1[1], conjunto3[0],conjunto1[1],conjunto3[1],conjunto1[1], conjunto3[2],conjunto1[2], conjunto3[0],conjunto1[2], conjunto3[1],conjunto1[2], conjunto3[2],conjunto1[3], conjunto3[0],conjunto1[3], conjunto3[1],conjunto1[3], conjunto3[2],conjunto1[4], conjunto3[0],conjunto1[4], conjunto3[1],conjunto1[4], conjunto3[2],conjunto1[5], conjunto3[0],conjunto1[5], conjunto3[1],conjunto1[5], conjunto3[2],conjunto1[6], conjunto3[0],conjunto1[6], conjunto3[1],conjunto1[6], conjunto3[2]);
}

// Función Producto Cartesiano
void pC2x3(int conjunto2[5],int conjunto3[3]) {
    printf("\nConjunto 2 X Conjunto 3\n");
    printf("{(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i),(%i,%i)}\n",conjunto2[0], conjunto3[0],conjunto2[0], conjunto3[1],conjunto2[0], conjunto3[2],conjunto2[1], conjunto3[0],conjunto2[1],conjunto3[1],conjunto2[1], conjunto3[2],conjunto2[2], conjunto3[0],conjunto2[2], conjunto3[1],conjunto2[2], conjunto3[2],conjunto2[3], conjunto3[0],conjunto2[3], conjunto3[1],conjunto2[3], conjunto3[2],conjunto2[4], conjunto3[0],conjunto2[4], conjunto3[1],conjunto2[4], conjunto3[2]);
}

// Función Union
void union1(int conjunto1[7], int conjunto2[5]) {
    int i, j;
    int flag = 0;
    int aux[20];
    int contador = 0;
    
    for(i = 0; i < 7; i++) {
        contador++;
        aux[i] = conjunto1[i];
    }
    
    int auxiliar = 0;
    
    for(i = contador; i < 12; i++) {
        aux[i] = conjunto2[auxiliar];
        auxiliar++;
    }
    
    for(i = 0; i < 12; i++) {
        printf(" %i ", aux[i]);
    }
}

// Función Union
void union2(int conjunto2[5], int conjunto3[3]) {
    int i, j;
    int flag = 0;
    int aux[20];
    int contador = 0;
    printf("\n");
    
    for(i = 0; i < 5; i++) {
        contador++;
        aux[i] = conjunto2[i];
    }

    int auxiliar = 0;
    for(i = contador; i < 8; i++) {
        aux[i] = conjunto3[auxiliar];
        auxiliar++;
    }

    for(i = 0; i < 8; i++) {
        printf(" %i ", aux[i]);
    }

}

// Función Unión
void union3(int conjunto1[7], int conjunto3[3]) {
    int i, j;
    int flag = 0;
    int aux[20];
    int contador = 0;
    printf("\n");
    
    for(i = 0; i < 7; i++) {
        contador++;
        aux[i] = conjunto1[i];
    }
    
    int auxiliar = 0;
    for(i = contador; i < 10; i++) {
        aux[i] = conjunto3[auxiliar];
        auxiliar++;
    }
    
    for(i = 0; i < 10; i++) {
        printf(" %i ", aux[i]);
    }
}