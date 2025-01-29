
int busca_linear(int *vetor, int chave, int quantidade) {
    int aux;
    for (aux = 0; aux < quantidade; aux++) {
        if (chave == vetor[aux]) {
            return aux;
        }
    }

    return -1;
}
