

int busca_binaria(int chave, int numIni, int numFim, int v[]) {
    if (numIni > numFim) return -1;
    else{
        int meio = (numIni + numFim) / 2;
        if (v[meio] == chave) return meio;
        if (v[meio] < chave) return busca_binaria(chave, meio+1, numFim, v);
        else return busca_binaria(chave, numIni, meio-1, v);
    };
}
