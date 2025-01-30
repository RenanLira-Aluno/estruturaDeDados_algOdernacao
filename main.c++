#include <cstdio>
#include "algoritmos/busca_linear.c++"
#include "algoritmos/busca_binaria.c++"
#include "algoritmos/bolha.c++"
#include "algoritmos/ordenacao_insercao.c++"
#include "algoritmos/ordenacao_intercalacao.c++"
#include "algoritmos/ordenacao_selecao.c++"

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int lenVetor = sizeof(vetor)/sizeof(vetor[0]);

    int posBL = busca_linear(vetor, 2, lenVetor);
    printf("%d\n", posBL);

    int posBB = busca_binaria(2, vetor[0], vetor[lenVetor-1], vetor);
    printf("%d\n", posBB);

    int v[5] = {5, 2, 4, 1, 3};
    bolha(5, v);
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }


//
    int array[] = {10, 6, 5, 1, 3};
    int tam = sizeof(array) / sizeof(array[0]);

    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    ordenacao_insercao(array, tam);

    printf("Array apos a ordenacao:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int array1[] = {10, 6, 5, 1, 3};
    int tam1 = sizeof(array1) / sizeof(array1[0]);

    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tam1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    merge_sort(array1, 0, tam1 - 1);

    printf("Array apos a ordenacao:\n");
    for (int i = 0; i < tam1; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int array2[] = {10, 6, 5, 1, 3};
    int tam2 = sizeof(array2) / sizeof(array2[0]);

    printf("Array antes da ordenacao:\n");
    for (int i = 0; i < tam2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    ordenacao_selecao(array2, tam2);

    printf("Array apos a ordenacao:\n");
    for (int i = 0; i < tam2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");


    return 0;
}
