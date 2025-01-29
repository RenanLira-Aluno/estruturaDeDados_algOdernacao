#include <cstdio>
#include "algoritmos/busca_linear.c++"
#include "algoritmos/busca_binaria.c++"
#include "algoritmos/bolha.c++"

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

    return 0;
}
